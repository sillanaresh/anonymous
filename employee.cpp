#include<iostream>
using namespace std;
class employee
{
char name[10];
float age;
public:
void getdata(void);
void putdata(void);
};
void employee::getdata(void)
{
cout<<"enter name";
cin>> name;
cout<<"enter age";
cin>> age;
}
{
cout<<"name="<<name;
cout<<"age="<<age;
}
const int size=3;
int main()
{
employee manager[size];
for(int i=0;i<size;i++)
}
cout<<"details of managers are;
manager[i].getdata();
} 
cout<<"\n";
for(i=0;i<size;i++)
{
cout<<"manager";
manager[i].getdata();
}
return 0;
}
