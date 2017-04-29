#include<iostream>
using namespace std;
class a
{
public :
int x,y,z;
void add();
};
void a: :add()
{
 cout<<"enter the numbers";
 cin>>x>>y;
 z=x+y;
 cout<<z;
 }
 main()
 {
 a obj;
 obj.add();
 }
 
