#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cin >> i;
    cin >> j;
    int a[i][j];
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            a[k][l] = k * l;
        }
    }
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            cout << a[k][l];
        }
        cout<<endl;
    }
    return 0;
}