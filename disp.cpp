#include<iostream>
using namespace std;
class test
{
  int x;
  float y;
  test (int a,float b)
  {
    x=a;
    y=b;
   }
   void disp()
   {
     cout<<x<<y<<endl;
    }
    void disp(int b)
    {
       x=b;
       cout<<x;
      }
       void disp(int a,float b)
       {
          x=a,y=b;
          cout<<x<<y;
         }
         };
int amin()
{
test t(10,20,4);
t.disp();
t.disp(30);
t.disp(                                                                                                                                                     
  
