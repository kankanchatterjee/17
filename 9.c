#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20],temp;
    int l,i,j;
    printf("Enter a string");
    fgets(str,20,stdin);
    for(l=0;str[l];l++);
    for(i=0;i<=l-2;i++)
    {
        for(j=i+1;j<=l-1;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Sorted string is %s",str);
    getch();
    return 0;
}
