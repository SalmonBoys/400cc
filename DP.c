#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int score;
};

void swapStudents(struct Student *first, struct Student *second);
void sortStudents(struct Student students[], int size);
void printStudents(struct Student students[], int size);
void findStudentInfo(struct Student students[], int size, char searchName[]);

int main() {
    char searchName[MAX_NAME_LENGTH];
    struct Student students[MAX_STUDENTS] = {
        {1, "Alice", 63},
        {2, "Bob", 47},
        {3, "Charlie", 78},
        {4, "David", 95},
        {5, "Eva", 88}
    };


    sortStudents(students, MAX_STUDENTS);


    printf("排序后的学生信息：\n");
    printStudents(students, MAX_STUDENTS);


    printf("\n请输入学生姓名以查找成绩和等级： ");
    scanf("%s", searchName);


    findStudentInfo(students, MAX_STUDENTS, searchName);

    return 0;
}


void swapStudents(struct Student *first, struct Student *second) {
    struct Student temp = *first;
    *first = *second;
    *second = temp;
}


void sortStudents(struct Student students[], int size) {
	int i,j;
    for ( i = 0; i < size - 1; ++i) {
        for ( j = 0; j < size - i - 1; ++j) {
            if (students[j].score < students[j + 1].score) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}

void printStudents(struct Student students[], int size) {
	int i;
    for ( i = 0; i < size; ++i) {
        printf("学号：%d, name：%s, score：%d", students[i].id, students[i].name, students[i].score);
		if (students[i].score>90) printf(",grade:A\n");
		else if(students[i].score>75&&students[i].score<90) printf(",grade:B\n");
        else if(students[i].score>60&&students[i].score<75) printf(",grade:C\n");
		else  printf(",grade:D\n");
    }
}

void findStudentInfo(struct Student students[], int size, char searchName[]) {
	int a=0;
	int i;
    for ( i = 0; i < size; ++i) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Find student %s，score：%d", searchName, students[i].score);
			a=1;
		    if (students[i].score>90) printf(",grade:A\n");
		    else if(students[i].score>75&&students[i].score<90) printf(",grade:B\n");
            else if(students[i].score&&students[i].score<75) printf(",grade:C\n");
		    else  printf(",grade:D\n");
        }
	}
	if (a==0)
		printf("Not find the student\n");
}
