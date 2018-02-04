#include<stdio.h>
#include<conio.h>
void main()
{
int arr[7]={12,213,3,424,3,56,55};
int value,hole,i,n=7;
for(i=1;i<n;i++)
{
value=arr[i];
hole=i;
while(hole>0 && arr[hole-1]>value)
{
arr[hole]=arr[hole-1];
hole=hole-1;
}
arr[hole]=value;
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
getch();
}