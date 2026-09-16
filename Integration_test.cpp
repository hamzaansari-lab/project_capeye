#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    for(int i=0;i<20;i++) {
        int d=rand()%51, b=rand()%101;

        cout<<"WAKE\n";
        cout<<"Distance: "<<d<<"cm\n";
        cout<<"Battery: "<<b<<"%\n";
        cout<<"Level: "<<(d<10?"FULL":d<25?"HALF":"EMPTY")<<"\n";
        cout<<(b<20?"LOW BATTERY":rand()%2?"SEND OK":"SEND FAILED")<<"\n";
        cout<<"SLEEP\n\n";
    }
}
