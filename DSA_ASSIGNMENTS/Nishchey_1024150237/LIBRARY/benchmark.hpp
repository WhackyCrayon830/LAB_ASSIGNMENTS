#ifndef BENCHMARK_HPP
#define BENCHMARK_HPP

#include <string>

namespace benchmark {

template <typename Func>
void benchmark(Func algo, const std::string &filename, int start, int end, int step, int repetitions = 1);

}

#include "benchmark.tpp"

#endif