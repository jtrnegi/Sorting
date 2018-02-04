#include<stdio.h>
#include<conio.h>

int partition(int *arr,int start,int end);
void quicksort(int *arr,int start,int end);
void swap(int *a,int *b);

void main()
{
clrscr();
int i;
int arr[7]={12,12343,1,4,24,2,27};

quicksort(arr,0,6);

for(i=0;i<7;i++)
{
printf("%d \n",arr[i]);
}
getch();
}

void quicksort(int *arr,int start,int end)
{
if(start<end)
{
int partitionindex= partition(arr,start,end);

quicksort(arr,start,partitionindex-1);
quicksort(arr,partitionindex+1,end);
}
}

int partition(int *arr,int start,int end)
{
int pivot=arr[end];
int partitionindex=start;

for(int i=start;i<end;i++)
{
if(arr[i]<=pivot)
{
swap(&arr[i],&arr[partitionindex]);
partitionindex++;
}}
swap(&arr[partitionindex],&arr[end]);
return partitionindex;
}

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}