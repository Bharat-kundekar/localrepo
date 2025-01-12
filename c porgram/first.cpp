//#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float a[10],p;
int i, top, bot, mid;
cout<<"Typethe number in ascending order"<<"\n";
for (i=0;i<10;i++){
cin>>a[i];}
top=0;
bot=9;
mid=0;
cout<<"Type the number you want to search:\n";
cin>>p;
mid=(top+bot)/2;
while ((top<=bot)&&(a[mid]!=p))
{
if(p<a[mid]){
bot=mid-1; }
else{
top=mid+1;
mid=(top+bot)/2;  }
}
if(a[mid]==p)
{
cout<<"The number is at position"<<(mid+1) <<"\n";
}
else
{
cout<<"The number isn't found \n";         }
getch();
}
