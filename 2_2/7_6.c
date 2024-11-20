#include <stdio.h>

int main() {
    double usage, cost;

    // 输入月用电量
    scanf("%lf", &usage);

    // 判断用电量并计算电费
    if (usage < 0) {
        printf("Invalid Value!\n");
    } else if (usage <= 50) {
        cost = usage * 0.53;
        printf("cost = %.2f\n", cost);
    } else {
        cost = 50 * 0.53 + (usage - 50) * 0.58;
        printf("cost = %.2f\n", cost);
    }

    return 0;
}