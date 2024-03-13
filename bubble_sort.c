#include <stdio.h>

void read(int, int a[]);
void sort(int , int a[]);
void display(int ,int a[]);
int main()
{
    int a[100],n;
    printf("Enter the size: ");
    scanf("%d",&n);
    read(n,a);
    sort(n,a);
    display(n,a);
}

void read(int n, int a[100])
{
    int i;
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void sort(int n, int a[100])
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void display(int n,int a[100])
{
    int z;
    for(z=0;z<n;z++)
    {
        printf("%d\n",a[z]);
    }
}

