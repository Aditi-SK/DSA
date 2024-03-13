#include<stdio.h>
struct student
{
    int roll_number;
    char name[20];
    char name_dept[30];
    int nc;
    char name_c[5][20];
    int yoj;
};
void read(struct student[],int);
void display(struct student[],int);
void display_again(struct student);
void search_year(struct student[],int,int);
void search_rollnumber(struct student[]);

main()
{
    int n,year;
    struct student s[500];
    printf("Enter the number of students:");
    scanf("%d",&n);
    read(s,n);
    display(s,n);
    printf("\nEnter the year to be searched:");
    scanf("%d",&year);
    search_year(s,n,year);
}
void read(struct student s[500],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number:");
        scanf("%d",&s[i].roll_number);
        printf("\nEnter name:");
        scanf("%s",s[i].name);
        printf("\nEnter department:");
        scanf("%s",s[i].name_dept);
        printf("\nEnter number of courses:");
        scanf("%d",&s[i].nc);
        printf("\nEnter the name of courses:");
        for(j=0;j<s[i].nc;j++)
            {
                scanf("%s",s[i].name_c[j]);
            }
        printf("\nEnter year of joining:");
        scanf("%d",&s[i].yoj);
    }
}
void display(struct student s[500],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\nroll number=%d",s[i].roll_number);
        printf("\nname=%s",s[i].name);
        printf("\nname of dept=%s",s[i].name_dept);
        printf("\nnumber of courses=%d",s[i].nc);
        for(j=0;j<s[i].nc;j++)
        {
            printf("\nname of course(s)=%s",s[i].name_c[j]);
        }
        printf("\nyear of joining=%d",s[i].yoj);
    }
}
void display_again(struct student s)
{
        int j;
        printf("\nroll number=%d",s.roll_number);
        printf("\nname=%s",s.name);
        printf("\nname of dept=%s",s.name_dept);
        printf("\nnumber of courses=%d",s.nc);
        for(j=0;j<s.nc;j++)
        {
            printf("\nname of course(s)=%s",s.name_c[j]);
        }
        printf("\nyear of joining=%d",s.yoj);
}
void search_year(struct student s[500],int n,int year)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(year==s[i].yoj)
        {
            display_again(s[i]);
        }
    }
}

