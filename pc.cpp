#include<iostream>
using namespace std;
class bank
{ 
  int accno;
  string accname;
  public:
    bank(int no,string name);
    void disp()
    {
     cout<<accno<<endl;
     cout<<accname<<endl;
     }
     };
   bank::bank(int no,string name)
   {
     accno=no;
     accname=name;
     }
 int main()
 {
   bank b1(100,"abc");
   bank b2(200,"xyz");
   bank b3(300,"pqr");
   b1.disp();
   b2.disp();
   b3.disp();
 }
