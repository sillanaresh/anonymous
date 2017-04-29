#include<iostream>
using namespace std;
class sample
{
 int a,b;
 public:
  sample() {}
  sample(int x,int y)
  { 
     a=x;
     b=y;
   }
   void disp()
   {
     cout<<a<<"\t";
     cout<<b<<endl;
    }
   sample operator+(sample p)
   {
     sample q;
     q.a=a+p.a;
     q.b=b+p.b;
     return q;
     }
    };
    int main()
    {
      sample s1(10,20);
      sample s2(30,40);
       sample s3;
       s3=s1+s2;
        s3.disp();
       }
       
    
