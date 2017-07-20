#include<stdio.h>
int main()
{
int sum=0,i,n;
printf("Enter the Natural Numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("Sum of n Natural Numbers %d",sum);
return 0;
}
