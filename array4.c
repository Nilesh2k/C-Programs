#include<stdio.h>
int main()
{
int arr[10];
printf("Enter Array Elements");
for(int i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
for(int j=9;j>=0;j--)
{
printf("\n %d",arr[j]);
}
return 0;
}
