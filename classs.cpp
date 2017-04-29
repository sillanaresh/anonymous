#include<iostream>
using namespace std;
class strings
{
char *name;
int length;
 public:
 strings()
 {
length=0
name=new char[length+1];
strcpy(name,s);
}
void display()
{
cout<<name<<"\n";
}
void join(strings &a,strings &b)
{
length=a.length+b.length;
delete name;
name=new char [length+1];
strcpy(name,a.name);
strcat(name,b.name);
}
};
int main()
{

