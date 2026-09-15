#include <iostream>
#include <cstdlib>
using namespace std;

struct Data { int reading, battery; };

bool send(Data d) {
    cout << "Sending: " << d.reading << " cm, "
         << d.battery << "%\n";
    return rand() % 2;
}

int main() {
    Data d;
    cin >> d.reading >> d.battery;

    for(int i = 0; i < 3; i++)
        if(send(d)) {
            cout << "Success";
            return 0;
        }

    cout << "SEND FAILED";
}


















