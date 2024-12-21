#include <stdio.h>
#include <ctype.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    char input[20];
    printf("Enter a number: ");
    scanf("%s", input);

    // Check if the input is valid
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            printf("Illegal input\n");
            return 0;
        }
    }

    // Convert the input to an integer and reverse it
    int num = atoi(input);
    printf("Reversed: %d\n", reverseNumber(num));

    return 0;
}
