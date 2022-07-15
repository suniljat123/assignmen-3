#include<stdio.h>
int main()
{
    char a;
    printf("\nEnter any Alphabet=");
    scanf("%c",&a);
    if(a>='a'&&a<='z')
        printf("\n%c is Lower case alphabet ",a);
    else if(a>='A'&&a<='Z')
        printf("\n%c is Upper case alphabet ",a);
    else if(a>='0'&&a<='9')
        printf("\n%c is Digit",a);
    else
        printf("\n%c is Other symbol",a);

    return 0;
}
