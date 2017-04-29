#include<iostream>
using namespace std;
class num
{
int n;
public:
void display();
void check();
};
void num::display()
{
 cout<<"enter no\n";
 cin>>n;
 }
 void num::check()
 {
 if(n%2==0)
 {
   cout<<"even";
  }
  else
  {
   cout<<"odd";
   }
   }
   int main()
   {
    num n;
    n.display();
    n.check();
    return 0;
    }


