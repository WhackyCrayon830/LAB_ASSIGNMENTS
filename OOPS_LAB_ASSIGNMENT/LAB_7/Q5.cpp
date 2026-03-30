#include <iostream>
using namespace std;

class Time{
    private:
    int hours, mins, secs;

    public:
    Time(int h, int m, int s){
        hours = h;
        mins = m;
        secs = s;
    };

    void show(){
        cout << "Hours: " << hours << endl;
        cout << "Mins: " << mins << endl;
        cout << "Secs: " << secs << endl;
    }

    Time operator+(Time other){
        int h, m, s;
        h = hours + other.hours;
        m = mins + other.mins;
        s = secs + other.secs;
        return Time(h, m, s);
    }
};

int main() {
    Time t1(3, 2, 1);
    Time t2(1, 2, 3);

    Time t3 = t1 + t2;
    t3.show();
    return 0;
}