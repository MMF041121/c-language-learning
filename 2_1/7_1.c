#include <stdio.h>
int main() {
    int fahr = 100;
    int celsius = 5 * (fahr - 32) / 9;
    printf("fahr = 100, celsius = %d\n", celsius);
    return 0;
}