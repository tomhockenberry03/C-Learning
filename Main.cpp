#include <iostream>
using namespace std;

int main()
{
    float degreesF;
    cin >> degreesF;
    float degreesC = degreesF - 32;
    degreesC *= 5.556;
    cout << degreesC;
    return 0;
}