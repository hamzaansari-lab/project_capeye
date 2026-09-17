#include <iostream>
using namespace std;
const int LOW_THRESHOLD = 10;
const int HIGH_THRESHOLD = 25;
const int MAX_RETRIES = 3;

int main() {
    int d = 15;

    if (d < LOW_THRESHOLD)
        cout << "FULL";
    else if (d < HIGH_THRESHOLD)
        cout << "HALF";
    else
        cout << "EMPTY";

    return 0;
}



