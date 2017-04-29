#include<iostream>
using namespace std;
class item
{
static int count;
int member;
public:
void getdata(int a)
{
member=a;
count++;
}
void getcount()
{
cout<<"count="<<count;
}};
int item::count;
int main()
{
int a,b,c;
a.getcount();
b.getcount();
c.getcount();
count<<"after reading data";
a.getdata();
b.getdata();
c.getdata();
return 0;
}
