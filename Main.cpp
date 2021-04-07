#include <iostream>
using namespace std;

int main()
{
    string txt;
    getline (cin, txt);
    string flipped = txt;
    for (int i = 0; i < txt.length(); i++) {
        flipped[i] = txt[txt.length() - 1 - i];
        cout << i << endl;
    }
    cout << flipped;
}