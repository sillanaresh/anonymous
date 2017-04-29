#include<iostream>
using namespace std;
main()
{
        int n ,i,sum=0,a[8];
        cout<<"enter the no. elements";
        
        cin>>n;
        cout<<"enter elements";
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
        sum=sum+a[i];
        }
        cout<<sum;
        }
        
