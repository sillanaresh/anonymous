#include<iostream>
using namespace std;
struct x
{
int a,b,c;
void f()
{
c=a-b;
cout<<c;
}
};
struct x a1,a2;
main()
{


a1.a=30;
a1.b=10;
a1.f();


}
