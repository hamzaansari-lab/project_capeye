#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int sensor()
{return rand()%51;}
string level(int d)
{return d<10?"FULL":d<25?"HALF":"EMPTY";}
bool send()
{return rand()%2;}

int main()
{
    srand(time(0));
    int d=sensor();
    cout<<"WAKE\n"<<d<<"\n"<<level(d)<<"\n";
    cout<<(send()?"SEND OK":"SEND FAILED")<<"\nSLEEP";
}
