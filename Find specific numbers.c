#include <stdio.h>
int main() {
    int i, a, b, c;
    for (i = 200; i <= 300; i++) {
        a = i / 100; //求百位
        b = i / 10 % 10; //求十位
        c = i % 10; //求个位
        if (a + b + c == 12 && a * b * c == 42) {
            printf("%d\n", i);
        }
    }
    return 0;
}