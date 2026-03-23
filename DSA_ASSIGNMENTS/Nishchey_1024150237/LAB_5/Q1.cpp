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

int main() {

    // overwrite previous outputs
    std::remove("O1.csv");
    std::remove("Ologn.csv");
    std::remove("Osqrt.csv");
    std::remove("On.csv");
    std::remove("Onlogn.csv");
    std::remove("On2.csv");
    std::remove("On3.csv");
    std::remove("O2n.csv");
    std::remove("On_factorial.csv");

    // Graph 1
    benchmark::benchmark(constantTime, "O1", 1, 10000000, 500000, 100000);
    benchmark::benchmark(logarithmicTime, "Ologn", 1, 10000000, 500000, 100000);
    benchmark::benchmark(sqrtTime, "Osqrt", 1, 1000000, 50000, 10000);
    benchmark::benchmark(linearTime, "On", 1, 200000, 5000, 1000);
    benchmark::benchmark(nLognTime, "Onlogn", 1, 100000, 5000, 500);

    // Graph 2
    benchmark::benchmark(quadraticTime, "On2", 1, 5000, 100, 10);
    benchmark::benchmark(cubicTime, "On3", 1, 500, 10, 1);

    // Graph 3
    benchmark::benchmark(exponentialTime, "O2n", 1, 35, 1, 1);
    benchmark::benchmark(factorialTime, "On_factorial", 1, 10, 1, 1);

    return 0;
}