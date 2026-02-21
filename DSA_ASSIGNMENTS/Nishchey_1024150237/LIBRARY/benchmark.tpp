#include <chrono>
#include <fstream>
#include <iostream>

namespace benchmark {

template <typename Func>
void benchmark(Func algo, const std::string &filename, int start, int end, int step, int repetitions) {
    using namespace std::chrono;

    std::ofstream file(filename + ".csv");
    file << "n,time_microseconds\n";

    for (int n = start; n <= end; n += step) {

        auto t1 = high_resolution_clock::now();

        for (int i = 0; i < repetitions; i++)
            algo(n);

        auto t2 = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(t2 - t1).count();

        file << n << "," << duration / repetitions << "\n";

        std::cout << "Benchmarked n = " << n << "\n";
    }

    file.close();
}

} // namespace benchmark