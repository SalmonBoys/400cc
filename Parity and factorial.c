#include<stdio.h>
int factorial(int n) {
    int fact = 1,i;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int s = 0,i;
    for ( i = 1; i <= 10; i++) {
        int term = i % 2 == 0 ? -factorial(i) : factorial(i);
        s += term;
    }

    printf("s = %d\n", s);
    return 0;
}