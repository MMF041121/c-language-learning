#include <stdio.h>
#include <math.h>

double f(double x) {
    if (x >= 0) {
        return pow(x, 0.5);  // x^0.5 即为 sqrt(x)
    } else {
        return pow(x + 1, 2) + 2 * x + 1 / x;
    }
}

int main() {
    double x;
    
    // 输入
    scanf("%lf", &x);
    
    // 计算结果
    double result = f(x);
    
    // 输出
    printf("f(%.2f) = %.2f\n", x, result);
    
    return 0;
}