#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);

   if(n == 0){
    printf("0");
   }
   else if(n == 1){
    printf("1");
   }
   else{
    int a = 0, b = 1, net;
        printf("%d %d ", a, b);

        for (int i = 2; i <= n; i++) {
            net = a + b;
            a = b;
            b = net;
            printf("%d ", net);

     }printf("\n");
   }
   return 0;
}