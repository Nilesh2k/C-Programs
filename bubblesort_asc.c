#include<stdio.h>
int main()
{
int a[100],i,j,n,temp;
printf("Enter How Many Numbers");
scanf("%d",&n);

printf("\nEnter the Array Elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
/*BUBBLE SORT TECHNIQUE */
for(i=1;i<n-1;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The Araay in Ascending Order:-");
for(i=0;i<n;i++)
{
printf("\n %d",a[i]);
}
return 0;
}
