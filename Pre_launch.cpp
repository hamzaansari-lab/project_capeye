#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    for(int i=0;i<20;i++) {
        int d=rand()%51, b=rand()%101;

        cout<<"WAKE\n";
        cout<<"LEVEL: "<<(d<10?"FULL":d<25?"HALF":"EMPTY")<<"\n";
        cout<<"BATTERY: "<<b<<"%\n";
        cout<<(b<20?"LOW BATTERY":"SEND OK")<<"\n";
        cout<<"SLEEP\n";
    }
}