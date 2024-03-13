#include<studio.h>
int swap(int,int);
main()
{
    int j;
    int a,b;
    printf("Enter two digits: ");
    scanf("%d%d",&a,&b);
    j=swap(a,b);
    printf("Swapped numbers: %d\t%d",a,b);


}

int swap(int a,int b)
{
    int j;
    int temp;
    temp=b;
    b=a;
    a=b;
    return j;
}
