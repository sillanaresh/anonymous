#include<iostream>
using namespace std;
class test
{
 int a,b;
 double x,y;
 string s1,s2;
 public:
  int add(int a,int b)
  {
    return(a+b);
    }
  double add(double x,double y)
  {
    return(x+y);
   }
   string add(string s1,string s2)
   {
     return(s1+s2);
     }
 };
 int main()
 {
   test t;
   cout<<t.add(3,4)<<endl;
   cout<<t.add(13.2,41.6)<<endl;
   cout<<t.add("xyz","abc")<<endl;
   }
    
