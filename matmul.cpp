#include<stdio.h>
int main()
{
int m,n,p,q,a[100][100],b[100][100],c[100][100],sum=0,i,j,k;
printf("enter the no.of rows and columns of matrix");
scanf("%d%d",&m,&n);
printf("enter te elements of first matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the no. of elements in second matrix");
scanf("%d%d",&p,&q);
printf("enter the elements in matrix");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
if(n!=p)
{
printf("multiplication is not possible");
}
else
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<p;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
sum=0;
}
}
}
printf("the resultant matrix is ");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");}
}}}

