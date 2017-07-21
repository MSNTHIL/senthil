#include<stdio.h>
int main()
{
char ch;
printf("Enter any character");
scanf("%c",&ch);
if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
{
printf("Entered Character is an ALPHABET");
}
else
{
printf("Entered Character is NOT an ALPHABET");
}
return 0;
}
