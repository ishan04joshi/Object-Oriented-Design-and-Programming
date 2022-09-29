#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int digcount = 0, letcount = 0;
    cout << "Enter string ";
    cin >> str;
    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        int val = int(str[i]);
        if ((val >= 65 && val <= 90) || (val >= 95 && val <= 122))
        {
            letcount++;
        }
        if (val >= 48 && val <= 57)
        {
            digcount++;
        }
    }
    cout << "letters " << letcount << "\nDigits " << digcount;
    return 0;
}