#include<stdio.h>
#include<conio.h>
main()
{
char ch;
clrscr();
printf("plz enter any value=");
scanf("%c",&ch);
if(ch>='a'&& ch<='z')
{
printf("entered value is alphabet");
}
else if(ch>='0' && ch<='9')
{
printf("entered value is numeric");
}
else
{
printf("entered value is special character");
}
getch();
}