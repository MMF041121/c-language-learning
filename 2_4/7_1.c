#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++) {
        long long result = pow(3, i);
        printf("pow(3,%d) = %lld\n", i, result);
    }
}