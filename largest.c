#include<stdio.h>
int main()
{
int a=100,b=200,c=300;
if(a>b)
{
if(a>c)
{
printf("Largest Number is %d",a);
}
else
{
printf("Largest Number is %d",c);
}
}
else
{
if(b>c)
{
printf("Largest Number is %d",b);
}
else
{
printf("Largest Number is %d",c);
}
}
return 0;
}
