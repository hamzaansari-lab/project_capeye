#include <iostream>
#include <cassert>
using namespace std;

string level(int d){
    if(d<10) return "FULL";
    if(d<25) return "HALF";
    return "EMPTY";
}

int main(){
    assert(level(8)=="FULL");
    assert(level(10)=="HALF");
    assert(level(15)=="HALF");
    assert(level(25)=="EMPTY");
    assert(level(30)=="EMPTY");

    cout<<"TEST PASSED";
}