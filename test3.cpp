#include<iostream>
using namespace std;
class test
{
 private:
 int a;
 public:
 void data()
 {
   a=20;
   cout<<a;
 }
};
int main()
{
 test t;
 t.data();
}
