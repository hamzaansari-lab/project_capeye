#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int b=rand()%101;
    int s=rand()%51;

    cout<<"WAKE\n";
    cout<<"BATTERY: "<<b<<"%\n";

    if(b<20)
        cout<<"SEND SKIPPED\n";
    else if(s==0)
        cout<<"MEASURE FAILED\n";
    else
        cout<<"SEND OK";

    cout<<"SLEEP";
}

