

//. Write a program to find the position of first 1 in LSB

#include <math.h>
#include <stdio.h>
 
int main()
{
    int n ;
    printf("Enter value of n\n");
    scanf("%d",&n);
    int ans = log2(n & -n) + 1;
    printf("Position of 1 as LSB is at %d", ans);
    getchar();
    return 0;
}

/*
Enter value of n
16
Position of 1 as LSB is at 5
*/