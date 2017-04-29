#include<iostream>
using namespace std;
class base
{
 int a;
 public:
 void getdata()
 {
 cout<<"enter a";
 cin>>a;
 }
 };
 class sub: public base
 {
 public:
 void show()
 {
 cout<<a;
 }
 };
 int main()
 {
 sub p;
 p.getdata();
 p.show();
 }
