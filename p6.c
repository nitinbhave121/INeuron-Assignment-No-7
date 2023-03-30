
//. Write a program to print all Prime numbers under 100

#include <stdbool.h>
#include <stdio.h>
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++) {
    
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int N = 100;
    for (int i = 1; i <= N; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
   return 0;
}

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 