#include<iostream>
using  namespace std;
class sum
{
public :
void read(int a,float b,int c=5)
{
b=a+b+c;
cout<<"b:"<<b;
cout<<"/n";
}
};
int main()
{
sum s1;
s1.read(12,2.5,5)
s1.read(12,2.5);
s1.read(12,2.5,15);
}
