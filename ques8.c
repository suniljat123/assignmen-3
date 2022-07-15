#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter year=");
    scanf("%d",&a);
    if(a%4)
        printf("\n%d is not leap year",a);
    else
         printf("\n%d is leap year",a);
    return 0;
}
