#include <stdio.h>
#include <math.h>

int main() {
    double money, rate, interest, year;

    // 输入存款金额、存期和年利率
    scanf("%lf %lf %lf", &money, &year, &rate);

    // 计算利息
    interest = money * pow(1 + rate, year) - money;

    // 输出结果，保留两位小数
    printf("interest = %.2f\n", interest);

    return 0;
}