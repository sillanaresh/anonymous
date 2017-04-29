#include<iostream>
using namespace std;
class arthematic
{
int a,b;
public:
void getdata(void);
void display(void);
};
void arthematic::getdata(void)
{
cout<<"enter numbers";
cin>>a>>b;
}
void arthematic::display(void)
{
cout<<"sum="<<a+b;
cout<<"sub="<<a-b;
cout<<"multiplication="<<a*b;
cout<<"division="<<a/b;
}
int main()
{
arthematic a;
a.getdata();
a.display();
return 0;
}
