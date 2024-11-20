#include <stdio.h>

int main() {
    int F, C;
    
    // 输入华氏温度
    scanf("%d", &F);
    
    // 计算摄氏温度
    C = 5 * (F - 32) / 9;
    
    // 输出结果
    printf("Celsius = %d\n", C);
    
    return 0;
}