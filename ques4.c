#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    if(a&1)
        printf("%d is odd number",a);
    else
        printf("\n%d is even number",a);
    return 0;
}
