//write a c++ program for towers of a honai fuction template//
#include<iostream>
using namespace std;
template<class T,class T1>
void hanoi(T1 x,T from,T to,T aux)
{
 if(x==1)
 {
   cout<<"move disk from"<<from<<"to"<<to<<endl;
 }
 else
 {
  hanoi(x-1,from,aux,to);
  cout<<"move disk from"<<from<<"to"<<to<<endl;
  hanoi(x-1,aux,to,from);
  }
 }
 int main()
 {
  int s=1,d=3,a=2,n;
  cout<<"enter no of disks";
  cin>>n;
  cout<<"integer poles 1,2,3 \n";
  hanoi(n,s,d,a);
  cout<<"character poles a,b,c \n";
  char s1='a',d1='c',a1='b';
  hanoi(n,s1,d1,a1);
  }
