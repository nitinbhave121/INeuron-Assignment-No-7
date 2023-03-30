

//Write a program to check whether a given number is there in the Fibonacci series or
//not.

#include <stdio.h>
  int main() {
        int data, num1 = 0, num2 = 1, temp, flag = 0;
        printf("Enter any  number : \n");
        scanf("%d", &data);
        if (data == num1 || data == num2) {
                printf("%d is a fibonacci number\n", data);
                return 0;
        }
        while (num2 <= data) {
                temp = num2;
                num2 = num1 + num2;
                num1 = temp;
                if (num2 == data) {
                        flag = 1;
                        break;
                }
        }
        if (flag) {
                printf("%d is a fibonacci number\n", data);
        } else {
                printf("%d is not a fibonacci number\n", data);
        }
        return 0;
  }

/*
Enter any  number : 
34
34 is a fibonacci number
*/

/*
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
 
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}
 
bool isFibonacci(int n)
{
    return isPerfectSquare(5 * n * n + 4)
           || isPerfectSquare(5 * n * n - 4);
}
 
int main()
{
    for (int i = 1; i <= 10; i++) {
        if (isFibonacci(i))
            printf("%d is a Fibonacci Number \n", i);
        else
            printf("%d is a not Fibonacci Number \n", i);
    }
    return 0;
}*/