#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace chrono;

/* ================= RECURRENCE FUNCTIONS ================= */

// T(n) = T(n-1) + 1
long long T1(int n) {
    if (n <= 0) return 0;
    return T1(n - 1) + 1;
}

// T(n) = T(n-1) + n
long long T2(int n) {
    if (n <= 0) return 0;
    return T2(n - 1) + n;
}

// T(n) = T(n-1) + n^2
long long T3(int n) {
    if (n <= 0) return 0;
    return T3(n - 1) + (long long)n * n;
}

// T(n) = T(n-1) + log(n)
double T4(int n) {
    if (n <= 1) return 0;
    return T4(n - 1) + log(n);
}

/* ================= BENCHMARK ================= */

template <typename Func>
void benchmark(Func f, int n, const string &name) {

    auto start = high_resolution_clock::now();

    auto result = f(n);

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end - start);

    cout << name
         << " | n = " << n
         << " | T(n) = " << result
         << " | time = "
         << duration.count()
         << " ns\n";
}

/* ================= MAIN ================= */

int main() {

    cout << "Recurrence Relation Benchmark\n\n";

    int test_values[] = {5,10,20,30,40,50};

    for (int n : test_values) {

        benchmark(T1, n, "T(n)=T(n-1)+1");
        benchmark(T2, n, "T(n)=T(n-1)+n");
        benchmark(T3, n, "T(n)=T(n-1)+n^2");
        benchmark(T4, n, "T(n)=T(n-1)+log(n)");

        cout << "---------------------------------\n";
    }

    return 0;
}