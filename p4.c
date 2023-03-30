

// . Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int i,a,b,hcf;
    printf("Enter two numbers to find its HCF/GCD\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
        
    }
    printf("%d is HCF of %d and %d",hcf,a,b);
    return 0;
}

/*
Enter two numbers to find its HCF/GCD
81 153
9 is HCF of 81 and 153
*/

/*
#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}*/