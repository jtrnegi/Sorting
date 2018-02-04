#include<stdio.h>
#include<conio.h>

void heap(int *arr,int n,int i);
void heapsort(int *arr,int n);
void swap(int  *a,int *b);

void main()
{
clrscr();
int arr[7]={12,3,4,24,42,4,3};
int i;
heapsort(arr,7);

for(i=0;i<7;i++)
{
printf("%d\n",arr[i]);
}
getch();
}

void heap(int *arr,int n,int i)
{
int largest=i;
int l=2*i+1;
int r=2*i+2;

if(l<n && arr[l]>arr[largest])
{
largest=l;
}
if(r<n & arr[r]>arr[largest])
{
largest=r;
}

if(largest != i)
{

swap(&arr[i],&arr[largest]);

heap(arr,n,largest);
}
}

void heapsort(int *arr,int n)
{
for(int i=n/2-1;i>=0;i--)
{
heap(arr,n,i);
}
for(i=n-1;i>=0;i--)
{
swap(&arr[0],&arr[i]);
heap(arr,i,0);
}}

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}