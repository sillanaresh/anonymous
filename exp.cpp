#include<iostream>
using namespace std;
int main()
{
 int a=5,b=3,c=8;
 cout<<((a>b)||(a>c));
 cout<<((a==b)||(a>c));
 cout<<((a>b)&&(a>c));
 cout<<(c!=(a+b));
 return 0;
 }
