#include <stdio.h>
#define numStudents 3

void calculateStats(int *grades, float *average, int *max, int *min) {
	int i;
    *average = 0.0;
    *max = *grades;
    *min = *grades;

    for ( i = 0; i < numStudents; ++i) {
        *average += *(grades + i);

        if (*(grades + i) > *max) {
            *max = *(grades + i);
        }

        if (*(grades + i) < *min) {
            *min = *(grades + i);
        }
    }

    *average /= numStudents;
}

int main() {
	float average;
    int max, min;  
	int grades[numStudents];
	int i;

    printf("请输入学生成绩:\n");
    for ( i = 0; i < numStudents; i++) {
        printf("输入第 %d 个学生的成绩: ", i );
        scanf("%d", &grades[i]);
    }

    calculateStats(grades, &average, &max, &min);

    printf("平均成绩: %.2f\n", average);
    printf("最高分: %d\n", max);
    printf("最低分: %d\n", min);

    return 0;
}