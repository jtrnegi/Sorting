#include<stdio.h>
#include<conio.h>

void shell(int *a,int l);

void main()
{
int a[7]={12,34,323,52,5,4,99};

shell(a,7);

printf("the sorted elements are:");
for(int i=0;i<7;i++)
{
printf("%d\n",a[i]);
}
getch();
}

void shell(int *a,int l)
{
int gap=l/2;

while(gap>0)
{
for(int i=gap;i<l;i++)
{
int temp=a[i];
int j=0;
for(j=i;j>=gap && a[j-gap]>temp;j=j-gap)
{
a[j]=a[j-gap];
}
a[j]=temp;

}
gap=gap/2;

}}