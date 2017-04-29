#include<iostream>
using namespace std;
class cube
{
 public:
 int s;
 int volume();
 };
 int cube::volume()
 {
  return s*s*s;
 } 
  
  int main()
  {
   cube c1,c2;
   cout<<"enter sideof 1st cube\n";
   cin>>c1.s;
    cout<<"enter sideof 2nd cube\n";
   cin>>c2.s;
   cout<<"volume one is"<<c1.volume();
    cout<<"volume two is"<<c2.volume();
    return 0;
    }
    
