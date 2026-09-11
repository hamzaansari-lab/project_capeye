#include <iostream>
using namespace std;

int main()
{
    int distance = 8;

    if (distance < 10)
        cout << "FULL";
    else if (distance < 25)
        cout << "HALF";
    else
        cout << "EMPTY";

    return 0;
}