

//. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
int main()
{
    int i,a,b,hcf;
    printf("Enter two numbers to find Coprime or not \n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
        
    }
    if(hcf==1)
    printf("%d and %d are Co prime numbers\n",a,b);
    else
    printf("%d and %d are Not  Co prime numbers\n",a,b);
    return 0;
}

/*
Enter two numbers to find coprime or not
11 15
11 and 15 are Co prime numbers
*/