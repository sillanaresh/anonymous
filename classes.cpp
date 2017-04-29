#include<iostream>
using namespace std;
class abc;
class xyz
{
int a;
public :
void setvalue(int i)
{
a=i;
}
friend void max(xyz,abc);
};
class abc
{
int a;
public :
void setvalue(int i)
{
a=i;
}
friend void max(xyz,abc);
};
void max(xyz x,abc h)
{
if(x.a>h.a)
cout<<x.a;
else
cout<<h.a;
}
int main()
{
abc abc;
abc.setvalue(10);
xyz xyz;
xyz.setvalue(20);
max(xyz,abc);
return 0;
}
