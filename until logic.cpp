#include <iostream>
using namespace std;

void log(string t, string m) {cout << "[" << t << "] " << m << "\n";
}

int main() {
int distance, battery;
cin >> distance >> battery;

log("STATE", "SLEEP");
log("STATE", "WAKE");

if (distance > 0) log("SENSOR", "OK");
else log("ERROR", "Invalid");

if (battery > 20) log("SEND", "Success");
else log("BATTERY", "Low");

return 0;
}

