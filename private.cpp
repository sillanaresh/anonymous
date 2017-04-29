#include<iostream>
using namespace std
class class_2;
class class_1;
{
int value 1;
public :
void indata(int a){value 1=a};
void display(void){cout<<value 1};
friend void exchange(class_1&,class_2&);
class class_2
{
int value_2;
public:
void indata(int a)
void display(void)
friend void exchange(class_1&,class_2&)
};
void exchange(class_1&x,class_2&y)
{
int temp=x.value1;
x.temp=y.value2;
y.temp=temp
int main()
{
class_1 c1;
class_2 c2;
c1.indata(100);
c2.indata(200);
cout<<"values before exchange"<<"\n";
c1.display();
c2.display();
exchange(c1,c2);
c1.display();
c2.display();
}
