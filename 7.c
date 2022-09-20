#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    int i=0,j=0,k=0,x;
    printf("Enter a string");
    fgets(str,20,stdin);
    for(x=0;str[x];x++)
    {
         if((str[x]>='A' && str[x]<='Z')||(str[x]>='a' && str[x]<='z'))
           i++;
         else if(str[x]>='0' && str[x]<='9')
            j++;
         else
            k++;
    }
    printf("Number of alphabets , digits and special characters are %d %d %d",i,j,k-1);
    getch();
    return 0;

}
