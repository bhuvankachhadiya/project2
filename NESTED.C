#include<stdio.h>
#include<conio.h>
main()
{
int a=1,b=2,c=3,d=4;
clrscr();
if(a>b)
{
    if(a>c)
    {
    printf("a is max");
    }
    else
    {
    printf("c is max");
    }
}
else if(a>d)
{
printf("a2 is max");
}
else
{
printf("d is max");
}
if(b>c)
{
   if(b>d)
   {
   printf("b is max");
   }
   else
   {
   printf("d2 is max");
   }
if(c>d)
{
printf("c2 is max");
}
else
{
printf("d3 is max");
}
}

getch();
}