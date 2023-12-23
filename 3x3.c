#include <stdio.h>

void s(int matrix[3][3]) {
    int temp;
	int i;
    for ( i = 0; i < 3; ++i) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][2 - i];
        matrix[i][2 - i] = temp;
    }
}

void p(int matrix[3][3]) {
	int i,j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int myMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    p(myMatrix);
    s(myMatrix);
    printf("Matrix after swapping diagonals:\n");
    p(myMatrix);

    return 0;
}