#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    if(a>0)
        printf("Postive");
    else if(a==0)
        printf("\nZero",a);
    else
        printf("\nNegative");
    return 0;
}
