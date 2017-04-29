#include<iostream>
using namespace std;
main()
{
        int a[3][3],b[3][3],c[3][3],i,j,n,sum,m;
        cout<<"enter no. of elements in n";
        cin>>n;
        cout<<"enter no. of elements in m";
        cin>>m;
        cout<<"enter the elements in the array of a";
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++);
        {
        cin>>a[i][j];
        }
        }
        cout<<"enter the elements in the array b";
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
        cin>>b[i][j];
        }
        }
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        c[i][j]=sum;
        cout<<sum;
        }
        }
        }
      
