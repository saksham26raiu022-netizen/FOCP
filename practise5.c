#include <stdio.h>
int main(){
    int i,sum=0;
    printf("enter a given number");
    scanf("%d",&i);
    while (i>0){
        sum=sum+(i%10);
        i=i/10;
        printf("\n sum of digits is %d",sum);
    }
    return 0;
}