#include<iostream>
using namespace std;
class sample
{
int a,b;
public:  
sample(int x)
{
a=x;
}
void out()
{
cout<<"a="<<a;
}
sample operator ++()
{
++a;
return a;
}
sample operator --()
{
--a;
return a;
}
};
int main()
{
sample s1(3),s2(5);
++s1;
s1.out();
--s2;
s2.out();
}
