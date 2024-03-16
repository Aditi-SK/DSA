#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="Hello!\nThis has been created using Files!!\n";
    FILE *fp;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("File not created\n");
        return 1;
    }
    else
    {
        printf("File has been created.\n");
        if(strlen(a)>0)
        {
            fputs(a,fp);
        }
    }
    fclose(fp);
    printf("Data successfully written on the file\n");
return 0;
}
