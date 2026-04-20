#include <algorithm>
#include <cfloat>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

struct Point {
  double x, y;
};

double dist(Point a, Point b) {
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

// Brute Force: O(n^2)
pair<Point, Point> bruteForce(vector<Point> &pts) {
  double minD = DBL_MAX;
  pair<Point, Point> res;

  for (int i = 0; i < pts.size(); i++)
    for (int j = i + 1; j < pts.size(); j++)
      if (dist(pts[i], pts[j]) < minD) {
        minD = dist(pts[i], pts[j]);
        res = {pts[i], pts[j]};
      }
  return res;
}

// Divide & Conquer helpers
double stripClosest(vector<Point> &strip, double d) {
  double minD = d;
  sort(strip.begin(), strip.end(), [](Point a, Point b) { return a.y < b.y; });

  for (int i = 0; i < strip.size(); i++)
    for (int j = i + 1; j < strip.size() && (strip[j].y - strip[i].y) < minD;
         j++)
      minD = min(minD, dist(strip[i], strip[j]));

  return minD;
}

double dnc(vector<Point> &pts, int l, int r) {
  if (r - l <= 3) {
    double minD = DBL_MAX;
    for (int i = l; i < r; i++)
      for (int j = i + 1; j < r; j++)
        minD = min(minD, dist(pts[i], pts[j]));
    sort(pts.begin() + l, pts.begin() + r,
         [](Point a, Point b) { return a.y < b.y; });
    return minD;
  }

  int mid = (l + r) / 2;
  Point midPt = pts[mid];

  double dl = dnc(pts, l, mid);
  double dr = dnc(pts, mid, r);
  double d = min(dl, dr);

  vector<Point> strip;
  for (int i = l; i < r; i++)
    if (abs(pts[i].x - midPt.x) < d)
      strip.push_back(pts[i]);

  return min(d, stripClosest(strip, d));
}

double closestPairDnC(vector<Point> pts) {
  sort(pts.begin(), pts.end(), [](Point a, Point b) { return a.x < b.x; });
  return dnc(pts, 0, pts.size());
}

int main() {
  vector<Point> pts = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};

  auto [p1, p2] = bruteForce(pts);
  cout << "Brute Force - Closest pair: (" << p1.x << "," << p1.y << ") and ("
       << p2.x << "," << p2.y << ")" << endl;
  cout << "Distance: " << dist(p1, p2) << endl;

  double d = closestPairDnC(pts);
  cout << "D&C - Minimum distance: " << d << endl;

  return 0;
}