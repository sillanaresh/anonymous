#include<iostream>
using namespace std;
class sample
{ 
  int a,b,sum;
  public:
    void getdata()
    {
      cout<<"enter a,b";
      cin>>a>>b;
      }
    sample add(sample q)
    { 
      q.sum=q.a+q.b;
      return q;
     }
 void show()
  {
    cout<<"sum:"<<sum<<endl;
  }
    };
 int main()
 { 
   sample p,s;
   p.getdata();
   s=p.add(p);
   s.show();
  }
  
