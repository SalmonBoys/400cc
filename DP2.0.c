#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int score;
};

void swapStudents(struct Student **first, struct Student **second);
void sortStudents(struct Student *students[], int size);
void printStudents(struct Student *students[], int size);
void findStudentInfo(struct Student *students[], int size, char *searchName);

int main() {
    char searchName[MAX_NAME_LENGTH];
    struct Student student1 = {1, "Alice", 63};
    struct Student student2 = {2, "Bob", 47};
    struct Student student3 = {3, "Charlie", 78};
    struct Student student4 = {4, "David", 95};
    struct Student student5 = {5, "Eva", 88};

    struct Student *students[MAX_STUDENTS] = {&student1, &student2, &student3, &student4, &student5};

    sortStudents(students, MAX_STUDENTS);

    printf("������ѧ����Ϣ��\n");
    printStudents(students, MAX_STUDENTS);

    printf("\n������ѧ�������Բ��ҳɼ��� ");
    scanf("%s", searchName);

    findStudentInfo(students, MAX_STUDENTS, searchName);

    return 0;
}

void swapStudents(struct Student **first, struct Student **second) {
    struct Student *temp = *first;
    *first = *second;
    *second = temp;
}

void sortStudents(struct Student *students[], int size) {
    int i, j;
    for (i = 0; i < size - 1; ++i) {
        for (j = 0; j < size - i - 1; ++j) {
            if (students[j]->score < students[j + 1]->score) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}

void printStudents(struct Student *students[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        printf("ѧ�ţ�%d, name��%s, score��%d\n", students[i]->id, students[i]->name, students[i]->score);
    }
}

void findStudentInfo(struct Student *students[], int size, char *searchName) {
    int a = 0;
    int i;
    for (i = 0; i < size; ++i) {
        if (strcmp(students[i]->name, searchName) == 0) {
            printf("�ҵ�ѧ�� %s���ɼ���%d\n", searchName, students[i]->score);
            a = 1;
            break;
        }
    }
    if (a == 0) {
        printf("δ�ҵ���ѧ��\n");
    }
}

