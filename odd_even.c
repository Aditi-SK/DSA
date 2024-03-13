#include<stdio.h>

//ODD_EVEN
void check(int );

int main()
{
    int n;
    printf("Enter the number: ");
    scanf(" %d",&n);
    check(n);
    return 0;
}

void check(int n)
{
    if(n%2==0)
        printf("\nEVEN");
    else
        printf("\nODD");
}
