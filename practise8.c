#include <stdio.h>
int main() {
    int i,y=1;
    printf("enter a given number");
    scanf("%d",&i);
    while(y<=10)
    {printf("\n%d",i*y);
    y=y+1;}
    return 0;
}