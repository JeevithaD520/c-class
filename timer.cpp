#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;

int main() {
    cout << "Simple Stopwatch\n";
    cout << "Press Enter to start...";
    cin.get();

    auto start = high_resolution_clock::now();
    cout << "Stopwatch started. Press Enter to stop...";
    cin.get();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Elapsed time: " << duration.count() / 1000.0 << " seconds\n";

    return 0;
}
