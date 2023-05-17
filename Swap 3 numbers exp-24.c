#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);
    swap(&a, &b);
    swap(&b, &c);
    swap(&c, &a);
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
