#include<iostream>
using namespace std;
void divide(double x,double y);
{
cout<<"inside function\n";
try
{
if(y==0.0)
throw y;
else
cout<<"division="<<x/y<<"\n";
}
catch(double)
{
cout<<"end of function \n\n";
}}
int main()
{
cout<<"inside main\n";
try
{
divide(10.5,2.0);
divide(2.0,0.0);
}
catch(double)
{
cout<<"caught double inside main\n";
}
cout<<"end of main\n";
return(0);
}
