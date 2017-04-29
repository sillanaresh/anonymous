#include<iostream>
#include<string.h>
using namespace std;
class student
{
 int roll no;
 string name;
 public:
 void get details()
 {
  cout<<"enter rollno and name";
  cin>>roll no>>name;
 };
 void showdetails()
 {
   cout<<roll no<<"\t";
   cout<<name<<endl;
   }
   };
int main()
{
 student s[50];
 int n,i;
 cout<<"enter students";
 cin>>n;
 for(i=0;i<n;i++)
 s[i].getdetails();
 cout<<"details\n";
  for(i=0;i<n;i++)
  s[i].showdetails();
  }
