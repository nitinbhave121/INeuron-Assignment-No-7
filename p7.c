

//. Write a program to print all Prime numbers between two given numbers

#include <stdio.h>
 
int main()
{
    int a, b, i, j, flag;
    printf("Enter first value: ");
    scanf("%d", &a); 
    printf("\nEnter Second value: ");
    scanf("%d", &b); 
    printf("\nPrime numbers between %d and %d are: ", a, b);
    for (i = a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", i);
    }
 
    return 0;
}

/*
Enter first value: 20

Enter Second value: 40

Prime numbers between 20 and 40 are: 23 29 31 37
*/