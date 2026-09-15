#include <iostream>
using namespace std;

int main() {
int battery;
cin >> battery;
while (battery > 0) {
cout << "Battery: " << battery << "%\n";

if (battery <= 20)
cout << "Low Battery - Skip SEND\n";
else
cout << "SEND\n";

battery -= 5;
}

cout << "Battery Empty";
}


