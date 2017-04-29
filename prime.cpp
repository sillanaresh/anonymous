#include<iostream>
using namespace std;
main()
{
int a,b=0,i=1;
cout<<"enter a number";
cin>>a;
for(i=1;i<=a;i++)
{
if(a%i==0)
{
b=b+1;
}}
if(b==2)
{
cout<<"it is  a prime numbr";
}
else
{
cout<<"it is not prime number";
}}
