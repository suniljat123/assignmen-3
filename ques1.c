#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    if(a>0)
        printf("%d is Postive number",a);
    else
        printf("\n%d is Non-positive number",a);
    return 0;
}
