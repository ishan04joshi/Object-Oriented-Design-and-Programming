#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, len;
    string str;
    cout << "Enter string: ";
    cin >> str;
    len = str.length();
    for (i = len - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}