#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int sensor(){
    if(rand()%10<3) return -1;
    return rand()%50+1;
}

int main(){
    srand(time(0));

    for(int i=1;i<=3;i++){
        int d=sensor();
        if(d>0){
            cout<<"Success: "<<d<<" cm\n";
            break;
        }
        cout<<"Failed\n";
    }
}