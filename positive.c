#include<stdio.h>
int main()
{
double num;
printf("Enter any number:");
scanf("%lf",&num);
if(num<=0)
{
if(num==0)
{
printf("Entered number is ZERO");
}
else
{
printf("Entered number is NEGATIVE");
}
}
else
{
printf("Entered number is POSITIVE");
}
return 0;
}
