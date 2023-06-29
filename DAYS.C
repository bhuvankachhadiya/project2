#include<stdio.h>
#include<conio.h>
main()
{
char c;
clrscr();
printf("enter m for day1\n");
printf("enter t for day2\n");
printf("enter w for day3\n");
printf("enter T for day4\n");
printf("enter f for day5\n");
printf("enter s for day6\n");
printf("enter S for day7\n");
printf("plz enter proper value=");
scanf("%c",&c);
switch(c)
{
  case 'm':
	 printf("monday");
	 break;
  case 't':
	 printf("tuesday");
	 break;
  case 'w':
	 printf("wednesday");
	 break;
  case 'T':
	 printf("thursday");
	 break;
  case 'f':
	 printf("friday");
	 break;
  case 's':
	 printf("saturday");
	 break;
  case 'S':
	 printf("sunday");
	 break;
}
getch();
}