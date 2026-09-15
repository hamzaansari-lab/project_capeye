#include <iostream>
using namespace std;

struct Payload {
    int reading, battery;
};

bool sendData(Payload d) {
    cout << "Sending: " << d.reading << ", " << d.battery << "%" << endl;
    return false;
}

int main() {
    Payload d = {20, 80};

    for (int i = 1; i <= 3; i++) {
        if (sendData(d))
            return 0;
        cout << "Retry " << i << endl;
    }

    cout << "SEND FAILED";
}