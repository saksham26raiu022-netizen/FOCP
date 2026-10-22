#include <stdio.h>
int main() {
    int marks[5], i;
    printf("Enter marks of 5 subjects:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &marks[i]);
    }
   int  max = marks[0];
    for(i=1; i<5; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }
    printf("Maximum marks: %d\n", max);
    return 0;}