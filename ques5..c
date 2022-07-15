#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    if(a>99&&a<1000)
        printf("%d is 3-digit  number",a);
    else
        printf("\n%d is not 3-digit number",a);
    return 0;
}
