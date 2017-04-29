#include<iostream>
using namespace std;
template <class T>
T min( T arr[], T n)
{
	int i;
	T min;
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
return min;
}
template <class T>

T max( T arr[], T n)
{
	int i;
	T max;
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
return max;
}

int main()
{
	int size,a[10];
	cout<<"enter arrary size";
	cin>>size;
	cout<<"enter arrary elements";
	for(int i=0;i<size;i++)
	cin>>a[i];
	cout<<"min="<<min(a,size)<<endl;
	cout<<"max="<<max(a,size)<<endl;
}


