#include<iostream>
using namespace std;
main()
{
        int a,b,c,d,e,f,g,ch;
        cout<<"enter a,b";
        cin>>a>>b;
        cout<<"enter any case value";
        cin>>ch;
switch(ch)
{
case 0:c=a+b;
       cout<<c;
       break;
case 1:d=a-b;
       cout<<d;
       break;
case 2:e=a*b;
       cout<<e;
       break;
       
case 3:f=a/b;
       cout<<f;
       break;
case 4:g=a%b;
       cout<<g;
       break;
default:cout<<"invalid output";

 }
 }
