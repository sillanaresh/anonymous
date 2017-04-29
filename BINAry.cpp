#include<iostream>
using namespace std;
class sample
{
int a,b;
public:
sample()
{
}
sample(int x,int y)                              
{
a=x;
b=y;
}void display()
{
cout<<endl<<"a="<<a<<"b="<<b<<endl;
}
sample operator+(int i)
{
return sample(a+i,b+i);
sample temp;
temp.a=a+i;

