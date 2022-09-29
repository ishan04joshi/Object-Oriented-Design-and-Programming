#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers:";
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << "Smallest number is " << a;
    }
    else if (b < a && b < c)
    {
        cout << "Smallest number is " << b;
    }
    else
    {
        cout << "Smallest number is " << c;
    }
    return 0;
}