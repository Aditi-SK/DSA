#include<stdio.h>
void read(int m, int n,int a[m][n], int b[m][n]);
void sum(int m, int n,int a[m][n], int b[m][n]);
void display(int m, int n,int a[m][n], int b[m][n], int c[m][n]);
int main()
{
    int m,n;
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("\nEnter the number of columns: ");
    scanf("%d",&n);
    read(m,n,a,b);
    sum(m,n,a,b);
    display(m,n,a,b,c);
    return 0;
}
void read(int m, int n,int a[m][n], int b[m][n])
{
    int i,j;
    printf("\nValues for matrix A: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nValues for matrix B: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}

void sum(int m, int n,int a[m][n], int b[m][n])
{
    int c[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void display(int m, int n,int a[m][n], int b[m][n], int c[m][n])
{
    int i,j;
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
