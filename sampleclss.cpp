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
}
void display()
{
cout<<endl<<"a="<<a<<"b="<<b<<endl;
}
sample operator+{int i}
{ sample temp;
temp.a=a+i;
temp.b=b+i;
return(temp);
}
};
int main()
{
sample s1(20,30,s2);
s2=s1+5;

 s1.display();
 s2.display();
 }
 
