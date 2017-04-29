#include<iostream>
using namespace std;
class bank
{ 
  int accno;
  string accname;
  public:
    bank();
    bank(int no);
    bank(int no,string name);
  void disp()
  {
    cout<<accno<<accname;
  }
  bank::bank()
   {
     accno=0;
     accname="nil";
     }
     bank::bank(int no,string name)
   {
     accno=no;
     accname=name;
     }
     bank::bank(int no)
   {
     accno=no;
     }
     int main()
 {
   bank b1;
   bank b2(200,"xyz");
   bank b3(300);
   b1.disp();
   b2.disp();
   b3.disp();
 }
