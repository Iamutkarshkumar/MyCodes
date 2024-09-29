#include <iostream>
#include <thread>     // Required for std::thread and std::this_thread
#include <atomic>     // Required for std::atomic
#include <chrono>     // Required for std::chrono

using namespace std;

atomic<int> turn(0);  // Shared variable to control the turn

void processA() {
    for (int i = 0; i < 5; ++i) {
        while (turn != 0) {
            // Busy wait until it's Process A's turn
        }
        // Critical section
        cout << "Process A executing, iteration " << i + 1 << endl;
        
        // Simulate some work
        this_thread::sleep_for(chrono::milliseconds(500));
        
        // Change the turn to Process B
        turn = 1;
    }
}

void processB() {
    for (int i = 0; i < 5; ++i) {
        while (turn != 1) {
            // Busy wait until it's Process B's turn
        }
        // Critical section
        cout << "Process B executing, iteration " << i + 1 << endl;
        
        // Simulate some work
        this_thread::sleep_for(chrono::milliseconds(500));
        
        // Change the turn to Process A
        turn = 0;
    }
}

int main() {
    thread t1(processA);
    thread t2(processB);

    t1.join();
    t2.join();

    return 0;
}
