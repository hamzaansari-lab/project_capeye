#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int sleepTime;

    cout << "Enter sleep time (seconds): ";
    cin >> sleepTime;

    for(int i = 0; i < 3; i++) {
        cout << "WAKE\n";
        cout << "SLEEP\n";

        this_thread::sleep_for(chrono::seconds(sleepTime));

        cout << "WAKE AGAIN\n";
    }
}