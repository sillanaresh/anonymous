#include<iostream>
using namespace std;
int main()
{
 int exp;
 float base,result=1;
 cout<<"enter base and exp";
 cin>>base>>exp;
 cout<<base<<"^"<<exp<<"=";
 while(exp!=0)
 {
  result *=base;
  --exp;
  }
  cout<<result;
  return 0;
  }
