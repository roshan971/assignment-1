#include<stdio.h>
void main()
{
int a[10],n,i,min,max;
void sort(int [],int);
void smallandlarge(int [],int ,int ,int);
printf("\nPlease Enter the no of employees  :");
scanf("%d",&n);
	
printf("\nPlease Enter %d age of each employee: \n", n);
for(i=0; i<n; i++)
{
    scanf("%d",&a[i]);
} 
min=max=a[0];  
smallandlarge(a,n,min,max);
sort(a,n);
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
printf("minimum age of employee=%d\n",min);
printf("maximum age of employee=%d\n",max);
}



void sort(int num[],int n)
{
int a;
for (int i = 0; i < n; ++i){
      for (int j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The Age in ascending order is:\n");
   for (int i = 0; i < n; ++i){
      printf("%d\n", num[i]);
   }
}