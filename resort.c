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
    printf("�����벻����20���ַ�:\n");
    gets(inputArray);
    size = strlen(inputArray);
    sortArray(inputArray, size);

    printf("�������к������: %s\n", inputArray);

    printf("������������ʼλ��m�͸���n (�Կո�ָ�): ");
    scanf("%d %d", &m, &n);

    reverseSubstring(inputArray, m, n);

    printf("���ú������: %s\n", inputArray);

    return 0;
}