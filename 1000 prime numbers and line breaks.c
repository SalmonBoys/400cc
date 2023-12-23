#include <stdio.h>
int main() {
    int i, j, flag, count = 0;
    for (i = 2; i <= 1000; i++) {
        flag = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}