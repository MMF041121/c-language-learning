#include <stdio.h>

int main() {
    int number = 152;
    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = number / 100;

    printf("%d = %d + %d*10 + %d*100\n", number, units, tens, hundreds);

    return 0;
}