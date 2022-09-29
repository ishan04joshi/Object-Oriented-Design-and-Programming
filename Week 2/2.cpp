#include<iostream>
using namespace std;
int isprime(int n)
{
int count=0;
for(int i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
return count;
}
int main()
{
cout<<"Prime no between 100 and 500:\n";
for(int i=100;i<=500;i++)
{
if(isprime(i)==2)
cout<<i<<",";
}
return 0;
} 