#include<iostream>
using namespace std;
main()
{
        int r,n,reverse=0;
        cout<<"enter the value of n";
        cin>>n;
        while(n!=0)
        {
        r=n%10;
        n=n/10;
        reverse=reverse*10+r;
        }
        cout<<reverse;
        }
        
