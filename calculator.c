#include<stdio.h>
int main()
{
    int a,b,c;
    char op;

    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    printf("Enter operator: ");
    scanf("%c",&op);

    switch(op)
    {
        case'+':  c=a+b;
                    printf("Result=%d",c);
                    break;

        case'-':  c=a-b;
                    printf("Result=%d",c);
                    break;

        case'*':  c=a*b;
                    printf("Result=%d",c);
                    break;

        case'/':  c=a/b;
                    printf("Result=%d",c);
                    break;

        case'%':  c=a%b;
                    printf("Result=%d",c);
                    break;


    }
return 0;
}
