#include <iostream>
using namespace std;

enum State { SLEEP, WAKE, MEASURE, SEND };

int main() {
    State state = SLEEP;

    for (int i = 0; i < 5; i++) {
        cout << "SLEEP\n";
        state = WAKE;

        cout << "WAKE\n";
        state = MEASURE;

        cout << "MEASURE\n";
        state = SEND;

        cout << "SEND\n";
        state = SLEEP;

    }
}