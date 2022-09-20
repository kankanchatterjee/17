#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20],copy[20];
    int i,j;
    printf("Enter a string");
    fgets(str,20,stdin);
    for(i=0,j=0;str[i];i++,j++)
        copy[j]=str[i];
    printf("copied string is %s",copy);
    getch();
    return 0;
}

