
// Write a program to find next Prime number of a given number

#include<stdio.h>

void main()
{
    int n,i,j;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }

        if(j==i)
        {
            printf("The next prime number is :%d",i);
            break;
        }
    }
}

/*
Enter the number : 13
The next prime number is :17
*/