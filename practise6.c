#include <stdio.h>
int main() 
    {
    int i,j=1;
    printf("enter a given number");
    scanf("%d",&i);
    while(j<=i)
    {if(i%j==0)
        printf("\n %d is a factor of %d",j);
        j=j+1;
    } 
    return 0;
    }