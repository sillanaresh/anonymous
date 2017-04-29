#include<iostream>
using namespace std;
class basic
{
 private:
 int a,b,c;
  public:
  void get();
  int add();
  int sub();
  int mul();
  int div();
  };
  void basic::get()
  {
  cout<<"enter a,b valeus\n";
  cin>>a>>b;
  }
  int basic::add()
  {
  c=a+b;
  cout<<c;
  return 0;
  }
 int basic::sub()
  {
  c=a-b;
  cout<<c;
  return 0;
  } 
 int basic::mul()
  {
  c=a*b;
  cout<<c;
  return 0;
  } 
  int basic::div()
  {
  c=a%b;
  cout<<c;
  return 0;
  } 
  int main()
  {
  basic n;
  n.get();
  n.add();
  n.sub();
  n.mul();
  n.div();
  
  return 0;
  }
