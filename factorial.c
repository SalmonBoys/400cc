#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int m, n,result;
    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);
    result = (factorial(m) * factorial(n)) / factorial(m - n);
    printf("(%d! * %d!) / (%d-%d)! = %lu\n", m, n, m, n, result);
    return 0;
}
