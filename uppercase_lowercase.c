#include<stdio.h>
// A:65    0:48    a:97    <---- ASCII values
int main()
{
    int i,j;
    for(i=97;i<123;i++)
    {
        printf(" %c\n",i);
    }

    printf("\n\n\n");

    for(j=65;j<91;j++)
    {
        printf(" %c\n",j);
    }
    return 0;
}
