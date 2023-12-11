#include<stdio.h>
void main()
{
int a[50],i,n;
printf("enter the range:");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("entered elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
