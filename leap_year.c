#include<stdio.h>
//LEAP_YEAR
int main()
{
      int y;
    while(1)
{

    printf("Enter the year: ");
    scanf("%d",&y);
    if(y%4==0)
        printf("LEAP YEAR\n");
    else if(y%400==0)
        printf("LEAP YEAR\n");
    else if(y%100==0)
        printf("WAIT FOR A FEW YEARS\n");
    else
        printf("\nWAIT FRO FEW YEARS\n");

}

    return 0;
}
