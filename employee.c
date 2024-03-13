#include<stdio.h>
#include<string.h>

struct emp
{
    char name[30];
    float salary;
    int year;
};

void read(struct emp e[], int);
void display(struct emp e[], int);
float av_salary(struct emp e[], int);

int main()
{
    struct emp e[100];
    int n;
    float av;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    read(e,n);
    display(e,n);
    av=av_salary(e,n);
    printf("Average Salary is: %f",av);
}

void read(struct emp e[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of employee: ");
        scanf(" %s",e[i].name);
        printf("\nSalary: ");
        scanf("%d", &e[i].salary);
        printf("YEAR:\n");
        scanf("%d", &e[i].year);
    }
}

void display(struct emp e[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("NAME:%s\nSALARY:%f\nYOJ:%d",e[i].name,e[i].salary,e[i].year);
    }
}

float av_salary(struct emp e[100], int n)
{
    int i;
    float sum=0,av;
    for(i=0;i<n;i++)
    {
        sum=sum+e[i].salary;
    }
    av=sum/n;
    return av;
}















