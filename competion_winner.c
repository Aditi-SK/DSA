#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct contest
{
    char name[20];
    int points;
};

void read(struct contest *, int);
void display(struct contest *, int);
void display_info(struct contest *);
void winners(struct contest *, int);

main()
{
    int n;
    struct contest *c;

    printf("Enter the number of participants:\n");
    scanf("%d", &n);

    c = (struct contest *)malloc(sizeof(struct contest) * n);

    read(c, n);
    display(c, n);
    winners(c, n);

    free(c);


}

void read(struct contest *c, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter the name:\n");
        scanf("%s", c[i].name);

        printf("Enter the points:\n");
        scanf("%d", &c[i].points);
    }
}

void display(struct contest *c, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Name: %s\n", c[i].name);
        printf("Points: %d\n", c[i].points);
    }
}

void display_info(struct contest *c)
{
    printf("Participant name: %s\n", c->name);
    printf("Score: %d\n", c->points);
}

void winners(struct contest *c, int n)
{
    int t, i = 0, min = 0, j = 0;

    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(c[min].points < c[j].points)
            {
                min = j;
            }
        }

        t = c[min].points;
        c[min].points = c[i].points;
        c[i].points = t;
    }

    printf("\nThe winners are as follows:\n");
    printf("\nThe 1st winner is:\n");
    display_info(&c[1]);
    printf("\nThe 2nd winner is:\n");
    display_info(&c[n-1]);
}
