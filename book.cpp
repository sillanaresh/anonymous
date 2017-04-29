#include<iostream>
using namespace std;
struct author
{
int nop;
char name[10],title[10];
float cost;
}x;
main()
{
cout<<"enter the detailes";
cin>>x.nop>>x.name[10]>>x.title[10]>>x.cost;
cout<<x.nop;
cout<<x.name[10];
cout<<x.title[10];
cout<<x.cost;
}
