#include <stdio.h>
void countdata (int m[], int x) {
    int odd=0, even=0, zero=0;
    for (int i = 0; i < x; i++) {
        if (m[i] == 0) {
            zero++;
        } else if (m[i] % 2 == 0) {
            even++;
        } else if(m[i] % 2 != 0) {
            odd++;
        }
        else if (m[i]== 0) {
            zero++;
        }
    }
    printf("Odd: %d, Even: %d, Zero: %d\n", odd, even, zero);
}
int main() {
    int marks[100], i,n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    printf("Enter marks of %d subjects:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &marks[i]);
    }
    countdata(marks, n);
    return 0;
}