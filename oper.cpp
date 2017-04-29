#include<iostream>
using namespace std;
class sample
{
  int a;
  public:
   sample(int x)
   {
     a=x;
    }
  void operator-()
  {
    a=-a;
   }
   void disp()
   {
     cout<<a<<endl;
     }
     };
int main()
{
 sample s1(20);
 sample s2(-30);
  -s1;
  -s2;
  s1.disp();
  s2.disp();
  }
