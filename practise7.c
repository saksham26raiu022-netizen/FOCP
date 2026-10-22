#include <stdio.h>
int main() {
    int i, product=1;
    printf("enter a given number");
    scanf("%d",&i);
    while (i>0)
    {product=product*i;
    i=i-1;}
    printf("the factorial of the given number is %d",product);
    return 0;
}