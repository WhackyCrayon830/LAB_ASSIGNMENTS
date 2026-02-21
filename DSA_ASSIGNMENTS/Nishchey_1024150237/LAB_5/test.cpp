#include "../LIBRARY/benchmark.hpp" // use -I library when compiling
#include <cmath>

/* ================= TIME COMPLEXITY FUNCTIONS ================= */

// O(1)
void constantTime(int n) {
    volatile int x = n;
}

// O(log n)
void logarithmicTime(int n) {
    volatile int x = n;
    while (x > 1)
        x /= 2;
}

// O(√n)
void sqrtTime(int n) {
    volatile int sum = 0;
    for (int i = 0; i <= std::sqrt(n); i++)
        sum += i;
}

// O(n)
void linearTime(int n) {
    volatile int sum = 0;
    for (int i = 0; i < n; i++)
        sum += i;
}

// O(n log n)
void nLognTime(int n) {
    volatile int sum = 0;
    for (int i = 0; i < n; i++) {
        int x = n;
        while (x > 1)
            x /= 2;
        sum += i;
    }
}

// O(n^2)
void quadraticTime(int n) {
    volatile int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += i + j;
}

// O(n^3)
void cubicTime(int n) {
    volatile int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                sum += i + j + k;
}

// O(2^n)
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void exponentialTime(int n) {
    fibonacci(n);
}

// O(n!)
void permuteHelper(int n, int depth) {
    if (depth == n)
        return;
    for (int i = 0; i < n; i++)
        permuteHelper(n, depth + 1);
}

void factorialTime(int n) {
    permuteHelper(n, 0);
}

/* ================= MAIN ================= */

int main() {

    // O(1)
    benchmark::benchmark(constantTime, "O1", 1, 1000000, 100000, 100000);

    // O(log n)
    benchmark::benchmark(logarithmicTime, "Ologn", 100, 10000000, 100000, 10000);

    // O(√n)
    benchmark::benchmark(sqrtTime, "Osqrt_n", 100, 1000000, 10000, 1000);

    // O(n)
    benchmark::benchmark(linearTime, "On", 1000, 50000, 1000, 1000);

    // O(n log n)
    benchmark::benchmark(nLognTime, "Onlogn", 1000, 20000, 1000, 100);

    // O(n^2)
    benchmark::benchmark(quadraticTime, "On2", 100, 2000, 100, 10);

    // O(n^3)
    benchmark::benchmark(cubicTime, "On3", 10, 100, 10, 1);
    benchmark::benchmark(exponentialTime, "O2n", 5, 30, 1, 1);
    benchmark::benchmark(factorialTime, "On_factorial", 3, 8, 1, 1);

    return 0;
}