#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5


void inputdata(int numbers[], char names[][30]) {
	int i;
    printf("输入学生的学号和姓名：\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("学生 %d：", i + 1);
        scanf("%d %s", &numbers[i], names[i]);
    }
}


void sort(int numbers[], char names[][30]) {
	int i,j;
	char tempName[30];
    for (i = 0; i < MAX_STUDENTS - 1; i++) {
        for (j = i+1; j < MAX_STUDENTS ; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int tempNumber = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tempNumber;
                strcpy(tempName, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], tempName);
            }
        }
    }
}

int search(int numbers[], char names[][30], int target) {
    int low = 0;
    int high = MAX_STUDENTS - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (numbers[mid] == target) {
            return mid; 
        } else if (numbers[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; 
}
int main() {
    int targetNumber;
	int studentNumbers[MAX_STUDENTS];
    char studentNames[MAX_STUDENTS][30];
    int index = search(studentNumbers, studentNames, targetNumber);
    inputdata(studentNumbers, studentNames);
    sort(studentNumbers, studentNames);
    printf("输入要查找的学号：");
    scanf("%d", &targetNumber);
    if (index != -1) {
        printf("找到学生：%s\n", studentNames[index]);
    } else {
        printf("未找到学生。\n");
    }

    return 0;
}
