#include<stdio.h>
void main()
{
   char ch;
   printf("enter the character=");
   scanf("%c",&ch);
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E'){
   printf("%c is a vowel\n",ch);
   }
   else
   printf("%c is a concent",ch);




}
