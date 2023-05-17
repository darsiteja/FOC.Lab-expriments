#include <stdio.h>
int reverseDigits(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    return reversedNumber;
}
int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    int reversedNumber = reverseDigits(number);
    printf("The reversed number is: %d\n", reversedNumber);
    return 0;
}
