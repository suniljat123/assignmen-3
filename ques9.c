#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter any 3 numbeer=");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
        printf("\nGreater number=%d",a);
    else if(b>=c)
         printf("\nGreater number=%d",b);
    else
         printf("\nGreater number=%d",c);
    return 0;
}
