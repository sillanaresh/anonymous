#include<iostream>
using namespace std;
class test
{
 int num;
 static int count;
 public:
 int getcount (int n)
 {
  num=n;
  count++;
 }
 static void showcount()
 {
  cout<<count;
 }
};
int main()
 {
  test t1,t2,t3;
  t1.getcount(1);  
  t2.getcount(2);  
  t3.getcount(3);  
  test::showcount();
  test::showcount();
  test::showcount();
 }
