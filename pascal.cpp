#include<iostream>
using namespace std;
int main()
{
int row, coeff=1,space,i,j;
cout<<"enter the row"<<;
cin>>row>>;
for(i=0;i<row;i++);
{
for(space=i;space<=row-i;space++)
{
cout>>"\n">>;
for(j=0;j<=i;j++)
{
if(j==0||i==0)
{
cout>>"1">>;
}
else
{
coeff=coeff*(i-j+1)/j;
}
cout>>"\n">>;
}
cout>>"\n">>;
}
}
}
