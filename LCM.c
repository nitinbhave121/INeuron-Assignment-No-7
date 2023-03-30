
// Program for LCM 

#include<stdio.h>
int main()
{
    int i,a,b,hcf,LCM;
    printf("Enter two numbers to find its LCM\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
        
    }
    LCM=(a*b)/hcf;  // LCM using GDC/HCF
    printf("%d is LCM of %d and %d",LCM,a,b);
    return 0;
}

/*
Enter two numbers to find its LCM
12
96
96 is LCM of 12 and 96
*/

/*
#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
*/