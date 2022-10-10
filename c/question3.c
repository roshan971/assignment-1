#include<stdio.h>
void main()
{
int a[10],n,i,min,max;
void smallandlarge(int [],int ,int ,int);
printf("\nPlease Enter the size of an array  :  ");
scanf("%d",&n);
	
printf("\nPlease Enter %d elements of an array: \n", n);
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
} 
min=max=a[0];  
smallandlarge(a,n,min,max);

}


void smallandlarge(int a[],int n,int min,int max)
{

for(int i=0; i<n; i++)
{
if(a[i]<min)
{
min=a[i];

}
if(a[i]>max)
{
max=a[i];
}}
printf("minimum=%d\n",min);
printf("maximum=%d",max);
}
