#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter sides of triangle=");
    scanf("%d %d %d",&a,&b,&c);
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
        printf("\nValid triangle");
     else
        printf("\nInvalid triagle");
    return 0;
}
