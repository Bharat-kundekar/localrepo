#include<stdio.h>
void main()
{
 int year;

 printf("enter the year=\n");
 scanf("%d",&year);
  if(year % 4==0){

 printf("%d is a leap year\n",year);
}
else
printf("not a leap year");


}
