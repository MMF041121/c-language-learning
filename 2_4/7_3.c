#include <stdio.h>

int main() {
   int N, sum = 0, factorial = 1;
   
   scanf("%d", &N);
   
   for (int i = 1; i <= N; i++) {
       factorial *= i;
       sum += factorial;
   }
   
   printf("%d\n", sum);
   
   return 0;
}