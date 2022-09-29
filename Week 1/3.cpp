#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The power: ";
    cin >> b;
    c = pow(a, b);
    cout << " The result: " << c;
    return 0;
}
