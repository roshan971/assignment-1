#include <stdio.h>

int main()
{
    int  n1, n2,k=1;
    void value(int ,int );
    
    printf("Enter  two numbers: ");//enter 36 and 24 here
    scanf("%d%d", &n1, &n2);
    value(n1,n2);
    
}





void value(int num1,int num2)
{   
    int min,hcf=1;
    min = (num1<num2) ? num1 : num2;
    for(int i=1; i<=min; i++)
    {
        
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    
    }
    printf("answer is:%d",hcf);
}
