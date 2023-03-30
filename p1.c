

// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>
long fibonacci(int num)
{
    long a = 0, b = 1, c = 0;
    
    if (num <= 1)
        return num;
    
    for (int i = 3; i <= num; i++)
    {
        c = a + b; 
        a = b;     
        b = c;     
    }
    return b;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The %dth fibonacci number is %ld", num, fibonacci(num));
    return 0;
}

/*
Enter a number: 10
The 10th fibonacci number is 34
*/