#include<stdio.h>
int main()
{
    float a,b,c,d,e,average;
    printf("\nEnter marks of given subjects out of 100=");
    printf("\nFundamendals of computers=");
    scanf("%f",&a);
    printf("\nC=");
    scanf("%f",&b);
    printf("\nC++=");
    scanf("%f",&c);
    printf("\nJava=");
    scanf("%f",&d);
    printf("\nPython=");
    scanf("%f",&e);
    average=(a+b+c+d+e)/5;
    if(average>=33)
        printf("\nPass");
    else
        printf("\nFail");

    return 0;
}
