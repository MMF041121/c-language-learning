#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    
    // 输入x值
    scanf("%lf", &x);
    
    // 计算函数值
    if (x != 0) {
        result = 1 / x;
    } else {
        result = 0;
    }
    
    // 输出结果，保留一位小数
    printf("f(%.1f) = %.1f\n", x, result);
    
    return 0;
}