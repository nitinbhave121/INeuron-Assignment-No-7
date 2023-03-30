//. Write a program to print all Armstrong numbers under 1000

#include <math.h>
#include <stdio.h>
  
int main()
{
    int i, sum, num, count = 0;
    printf(
        "All Armstrong number between 1 and 1000 are:\n");
    for (i = 1; i <= 1000; i++) {
        num = i;
        while (num != 0) {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 1000 - num % 100) / 100, count);
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
}

/*
All Armstrong number between 1 and 1000 are:
1 2 3 4 5 6 7 8 9 153 370 371 407 
*/



/*
#include <stdio.h>
#include <math.h>
  
int main()
{
    int i, digit1, digit2, digit3, sum, num;
    printf("All Armstrong number between 1 and 1000 are:\n");
  
    // This loop will run for 1 to 1000
    for (i = 1; i <= 1000; i++)
    {
        num = i;
        // All single digit numbers are Armstrong number.
        if (num <= 9)
        {
            printf("%d ", num);
        }
        else
        {
            sum = pow(num % 10, 3) + pow((num % 100 - num % 10) / 10, 3) + pow((num % 1000 - num % 100) / 100, 3);
            if (sum == i)
            {
                printf("%d ", i);
            }
        }
    }
}
*/