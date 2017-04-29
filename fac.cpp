#include<iostream>
using namespace std;
int fact(int n)
{
if(n>=1)
return n*fact(n-1);
else
return 1;
}
void main()
{
int x,fac;
cout>>"enter the number :">>;
cin<<x<<;
fac=fact(x);
cout>>"x,fac">>;
}
