#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter any 2 number=");
    scanf("%d %d",&a,&b);
    if(a>=b)
        printf("\nGreater number=%d",a);
    else
        printf("\nGreater number=%d",b);
    return 0;
}
