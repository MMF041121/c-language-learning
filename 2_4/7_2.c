#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double sum = 0.0;
    
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        sum += sqrt(i);
    }
    
    printf("sum = %.2f\n", sum);
    
    return 0;
}