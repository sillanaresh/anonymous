//write a c++ program for class template//
#include<iostream>
using namespace std;
template<class T>
class calc
{
  public:
  T a;
  T b;
  calc(T c,T d)
  {
   a=c;
   b=d;
  }
  T add()
  {
   return a+b;
  }
  T sub()
  {
   return a-b;
  }
  T mul()
  {
   return a*b;
  }
  T div()
  {
   return a/b;
  }
  T disp()
  {
    cout<<"add="<<add()<<endl;
    cout<<"sub="<<sub()<<endl;
    cout<<"mul="<<mul()<<endl;
    cout<<"div="<<div()<<endl;
  }
 };
 int main()
 {
   calc<int>p1(13,14);
   calc<float>p2(12.3,13.4);
   cout<<"integer data\n";
   p1.disp();
   cout<<"float data \n";
   p2.disp();
 }
   
  
