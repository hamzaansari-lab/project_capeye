#include <iostream>
using namespace std;

int sensor()
{
    return -1;   
}

int main()
{
    int distance = -1;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Attempt " << i << endl;

        distance = sensor();

        if (distance > 0)
        {
            cout << "Success: " << distance << " cm\n";
            break;
        }

        cout << "Failed\n";
    }

    if (distance == -1)
        cout << "MEASURE FAILED";

    return 0;
}