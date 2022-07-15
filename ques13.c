#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    if(a%3 && a%2)
        printf("\n%d is not divisible by 3 and 2",a);
    else
        printf("\n%d is divisible by 3 and 2",a);
    return 0;
}
