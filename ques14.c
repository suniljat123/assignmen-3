#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    if(a%3==0 || a%7==0)
        printf("\nDivisible");
    else
        printf("\nNot divisible");
    return 0;
}
