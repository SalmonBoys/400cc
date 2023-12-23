#include <stdio.h>
#include <string.h>

void sortArray(char *array, int size) {
	int i,j;
    for (i = 0; i < size - 1; ++i) {
        for (j = 0; j < size - i - 1; ++j) {
            if (*(array + j) > *(array + j + 1)) {
                char temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}

void reverseSubstring(char *array, int start, int count) {
    char *startPtr = array + start;
    char *endPtr = startPtr + count - 1;

    while (startPtr < endPtr) {
        char temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        ++startPtr;
        --endPtr;
    }
}

int main() {
    int m, n;
	int size = 1;
    char inputArray[20];
    printf("请输入不多于20个字符:\n");
    gets(inputArray);
    size = strlen(inputArray);
    sortArray(inputArray, size);

    printf("升序排列后的数组: %s\n", inputArray);

    printf("请输入逆置起始位置m和个数n (以空格分隔): ");
    scanf("%d %d", &m, &n);

    reverseSubstring(inputArray, m, n);

    printf("逆置后的数组: %s\n", inputArray);

    return 0;
}