#include<stdio.h>
int main()
{
char c;
printf("\nEnter an Albhabet");
printf("\nEnter your choice");
scanf(" %c",&c);
switch(c)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
printf("\nVowel");
break;
default:
printf("\nConsonant");
}
return 0;
}
