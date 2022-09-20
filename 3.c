#include<stdio.h>
#include<conio.h>
int main()
{
    char str[25];
    int i,j=0;
    printf("Enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        j++;
    printf("Number of vowels are %d",j);
    getch();
    return 0;
}
