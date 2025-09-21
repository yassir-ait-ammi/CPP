#include <ctime>
#include <iostream>

int main() {
    timespec start, end;

    // Get start time
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Code to measure
    for (volatile long i = 0; i < 1000000; ++i);

    // Get end time
    clock_gettime(CLOCK_MONOTONIC, &end);

    // Calculate elapsed time in nanoseconds
    long seconds = end.tv_sec - start.tv_sec;
    long nanoseconds = end.tv_nsec - start.tv_nsec;
    long elapsed_ns = seconds * 1000000000 + nanoseconds;

    std::cout << "Elapsed time: " << elapsed_ns << " ns\n";
    std::cout << "Elapsed time: " << elapsed_ns / 1000.0 << " us\n";
    std::cout << "Elapsed time: " << elapsed_ns / 1000000.0 << " ms\n";

    return 0;
}
