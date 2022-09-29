#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter a year: ";
cin>>year;
if(year%4==0)
cout<<"It is a leap year.";
else
cout<<"It is a not a leap year.";
return 0;
}
