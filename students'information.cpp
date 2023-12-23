#include <stdio.h>
#include <string.h>

#define MAX_NUM 10

int main()
{
    char id[MAX_NUM][20], name[MAX_NUM][20], classnum[MAX_NUM][20];
    float score[MAX_NUM];
    int i, j;
    char temp[20];

   
    for (i = 0; i < MAX_NUM; i++) {
        printf("请输入第%d个学生的学号：", i + 1);
        scanf("%s", id[i]);
        printf("请输入第%d个学生的姓名：", i + 1);
        scanf("%s", name[i]);
        printf("请输入第%d个学生的成绩：", i + 1);
        scanf("%f", &score[i]);
        printf("请输入第%d个学生的班级：", i + 1);
        scanf("%s", classnum[i]);
    }

    
    for (i = 0; i < MAX_NUM - 1; i++) {
        for (j = i + 1; j < MAX_NUM; j++) {
            if (score[i] < score[j]) {
                
                strcpy(temp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], temp);
                
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
                
                float temp_score = score[i];
                score[i] = score[j];
                score[j] = temp_score;
                
                strcpy(temp, classnum[i]);
                strcpy(classnum[i], classnum[j]);
                strcpy(classnum[j], temp);
            }
        }
    }

   
    printf("按成绩从高到低输出学生信息：\n");
    for (i = 0; i < MAX_NUM; i++) {
        printf("学号：%s，姓名：%s，成绩：%.2f，班级：%s\n", id[i], name[i], score[i], classnum[i]);
    }

    return 0;
}