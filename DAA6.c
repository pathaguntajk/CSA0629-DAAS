#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    int temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    int sum = 0;
    temp = num;

    // Calculate the sum of cubes of each digit
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num = 153;

    if (isArmstrong(num)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}