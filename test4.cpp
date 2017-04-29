#include<iostream>
using namespace std;
class test
{
 protected:
 int a;
 public:
 void data()
 {
   a=30;
   cout<<a;
 }
};
int main()
{
 test t;
 t.data();
}
