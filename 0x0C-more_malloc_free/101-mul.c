#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - multiplies two positive numbers
* Return: success
*/

int validate_arguments(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 0;
    }

    for (int i = 1; i < 3; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return 0;
            }
        }
    }

    return 1;
}

unsigned long long multiply_numbers(unsigned long long num1, unsigned long long num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    if (!validate_arguments(argc, argv))
        return 98;

    unsigned long long num1 = strtoull(argv[1], NULL, 10);
    unsigned long long num2 = strtoull(argv[2], NULL, 10);

    unsigned long long result = multiply_numbers(num1, num2);

    printf("%llu\n", result);

    return 0;
}
