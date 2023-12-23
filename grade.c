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

    printf("������ѧ���ɼ�:\n");
    for ( i = 0; i < numStudents; i++) {
        printf("����� %d ��ѧ���ĳɼ�: ", i );
        scanf("%d", &grades[i]);
    }

    calculateStats(grades, &average, &max, &min);

    printf("ƽ���ɼ�: %.2f\n", average);
    printf("��߷�: %d\n", max);
    printf("��ͷ�: %d\n", min);

    return 0;
}