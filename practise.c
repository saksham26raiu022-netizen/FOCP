#include <stdio.h>
int main()  {
    int a,b,c;
printf("input side a=");
scanf("%d",&a);
printf("input side b=");
scanf("%d",&b);
printf("input side c=");
scanf("%d",&c);
if(a==b && b==c && c==a )
printf("it is equilateral triangle ");
else if( a!=b && b!=c && c!=a )
printf("it is scalene triangle");
else
printf("it is isoscales triangle");
}