#include<iostream>
using namespace std;
void test(int x)
{
try
{
if(x==0) throw x;
else
if(x==1) throw 'x';
else
if(x==-1) throw 1.0;
}
catch(...)
{
cout<<"caught an exception\n";
}
}
int main()
{
cout<<"testing generic catch\n";
test(-1);
test(0);
test(1);
return(0);
}
