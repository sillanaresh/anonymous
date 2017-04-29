#include<iostream>
using namespace std;
int main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k,n,m,x,y,sum;
 cout<<"enter order 1\n";
 cin>>n>>m;
 cout<<"enter order 2\n";
 cin>>x>>y;
 if(m==x)
 {
  cout<<"enter elements 1\n";
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
     cin>>a[i][j];
    }
   }
   cout<<"enter elements 2\n";
  for(i=0;i<x;i++)
  {
   for(j=0;j<y;j++)
   {
     cin>>b[i][j];
    }
   }
   
