#include<stdio.h>
#include<conio.h>

void mergesort(int arr[],int l,int r);
void merge(int arr[],int l,int mid,int r);

void main()
{
int n,arr[30],i;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

mergesort(arr,0,n-1);

for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}

}

void mergesort(int arr[],int l,int r)
{

if(l<r)
{
int mid=(l+r)/2;

mergesort(arr,l,mid);
mergesort(arr,mid+1,r-1);
merge(arr,l,mid,r);
}
}

void  merge(int arr[],int l,int mid,int r)
{
int n1=mid;
int n2=(r-mid);
int i,j,k;
int la[n1];
int ra[n2];

for(i=0;i<n1;i++)
{
la[i]=arr[i];
}
for(j=0;j<n2;j++)
{
ra[j]=arr[mid+j];
}

i=0;
 j=0;
 k=0;

while(i<n1 && j<n2)
{
if(la[i]>ra[j])
{
arr[k]=ra[j];
j++;
}
else
{
arr[k]=la[j];
}
k++;
}
while(i<n1)
{
arr[k]=la[i];
k++;
}
while(j<n2)
{
arr[k]=ra[j];
k++;
}
}