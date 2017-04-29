#include<iostream>
using namespace std;
class student
{
float per;
int s1,s2,s3,s4,s5,sum;
char name[30],branch[20];
public:
void gedata(void);
void display(void);
};
void student::getdata(void)
{
cout<<"enter the marks of 5 subjects";
cin>>s1>>s2>>s3>>s4>>s5;
}
void student::display(void)
{
sum=s1+s2+s3+s4+s5;
cout<<"sum="<<sum;
per=(sum/500)*100.0;
if(per>90&&per<=100)
cout<<"grade O";
else if(per>80&&per<=90)
cout<<"grade a";
else if(per>70&&per<=80)
cout<<"grade b";
else if(per>60&&per<=70)
cout<<"grade c";
else if(per<60)
cout<<"grade f";
}
int main()
{
student s;
s.getdata();
s.display();
return 0;
}

