#include<iostream>
using namespace std;
union ABC
{
int num1;
float num2;
};
int main()
{
union ABC UN;
cout<<"Size of Union: "<<sizeof(UN);
return 0;
}
