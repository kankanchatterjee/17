#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    int i,j,l;
    printf("Enter a string");
    fgets(str,20,stdin);
    for(l=0;str[l];l++);
    char rev[l];
    for(i=0,j=l-1;i<=l-1;i++,j--)
        rev[i]=str[j];
    rev[i]='\0';
    printf("Reversed string is %s",rev);
    getch();
    return 0;
}
