#include<stdio.h>
int main()
{
    float a,b,r,p,l;
    printf("\nEnter cost price=");
    scanf("%f",&a);
    printf("\nEnter selling price=");
    scanf("%f",&b);
    if(a>=b)
    {
        r=a-b;
        l=r/a;
        l=l*100;
        printf("\nTotal loss=%.2f%%",l);
    }
    else
    {
        r=b-a;
        p=r/a;
        p*=100;
        printf("\nTotal profit=%.2f%%",p);
    }
    return 0;
}
