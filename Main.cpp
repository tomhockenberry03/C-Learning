#include <iostream>
using namespace std;

int main()
{
    int favorite = 7;
    cout << "What is your favorite number?";
    int number;
    cin >> number;
    if (number == favorite)
    {
        cout << "That's my favorite number too!";
    } else {
        cout << "That's not my favorite number.";
    }
    
}