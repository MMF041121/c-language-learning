#include <stdio.h>

int main() {
    int a, b, c, d;
    int sum;
    float average;

    // 输入4个整数
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // 计算和
    sum = a + b + c + d;

    // 计算平均值
    average = (float)sum / 4;

    // 按指定格式输出结果
    printf("Sum = %d; Average = %.1f\n", sum, average);

    return 0;
}