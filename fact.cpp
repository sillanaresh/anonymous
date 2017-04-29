#include<iostream>
using namespace std;
main()
{
int n,fact=1;
cout<<"enter a number";
cin>>n;
while(n>0)
{
fact=fact*(n);
n--;
}
cout<<fact;
}


