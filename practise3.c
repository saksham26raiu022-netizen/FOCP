#include <stdio.h>
int sum (int a, int b) {
    if(a>b){
    return a;}
    else{
    return b;}
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The maximum number is: %d\n", sum(a,b));
    return 0;
}