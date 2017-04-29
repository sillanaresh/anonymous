#include<iostream>
using namespace std;
class base1
{
int x;
public:
base1(int i)
{
x=i;
cout<<"base1 invoked:"<<endl;
}
void show_x()
{
cout<<"x="<<x;
}
};
class base2
{
int y,z;
public:
base2(int j,int k):
y(j),
z(k+y)
{
cout<<"base2 invoked:"<<endl;
}
void show_y()
{
cout<<"y="<<y;
cout<<"z="<<z;
}
};
class der:public base2,public base1
{
int m,n;
public:
der(int a,int b,int c):
base1(a*2),
base2(c,c),
m(a)
{
n=b;
cout<<"derived constructor is invoked"<<endl;
}
void show_mn()
{
cout<<"m="<<m<<"n="<<n;
}
};
int main()
{
der d(10,20,30);
d.show_x();
d.show_y();
d.show_mn();
return 0;
}
