#include<stdio.h>
#include<conio.h>
main()
{
int unit,bill,sc,total_bill;
clrscr();
printf("plz enter proper value for unit=");
scanf("%d",&unit);
if(unit<=50)
 {
 bill=unit*0.5;
 }
 else if(unit<=150)
 {
 bill=(unit-50)*0.75+25;
 }
 else if(unit<=250)
 {
 bill=(unit-150)*1.2+75;
 }
 else
 {
  bill=(unit-250)*1.5+120;
 }
 sc=bill*0.2;
 total_bill=bill+sc;
 printf("surcharge is=%d\n",sc);
 printf("total bill is=%d",total_bill);


getch();
}