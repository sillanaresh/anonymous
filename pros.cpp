#include<iostream>
using namespace std;
class rectangle
{
  float length,width;
  public:
    void setlength(float l)
    {
       length=l;
       cout<<"length="<<length<<endl;
     }
     void setwidth(float w)
    {
       width=w;
       cout<<"width="<<width<<endl;
     }
     float perimeter()
    {
       return 2*(length+width);
     }
     float area()
    {
      return(length*width);
     }
     int issamearea(rectangle other)
     {
        int area1=(length*width);
        int area2=(other.length*other.width);
        if(area1==area2)
        {
          return 1;
         }
         else
         {
           return 0;
          }
       }
    };
int main()
{
    rectangle r1,r2;
    cout<<"first rectangle:\n";
    r1.setlength(5);
    r2.setwidth(2.5);
    cout<<"perimeter="<<r1.perimeter()<<endl;
    cout<<"area="<<r1.area()<<endl;
     cout<<"second rectangle:\n";
    r1.setlength(5);
    r2.setwidth(18.9);
    cout<<"perimeter="<<r2.perimeter()<<endl;
    cout<<"area="<<r2.area()<<endl;
    if(r1.issamearea(r2))
    {
      cout<<"same area \n";
     }
     else
     {
       cout<<"not equal \n";
       cout<<"first rectangle changed values \n";
       r1.setlength(15);
       r2.setwidth(6.3);
       cout<<"first rectangle \n";
       cout<<"perimeter="<<r1.perimeter()<<endl;
       cout<<"area="<<r1.area()<<endl;
       cout<<"second rectangle \n";
       cout<<"perimeter="<<r2.perimeter()<<endl;
       cout<<"area="<<r2.area()<<endl;
       if(r1.issamearea(r2))
       {
         cout<<"same area \n";
        }
        else
        {
          cout<<"not equal \n";
         }
       }
       return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
       
       
