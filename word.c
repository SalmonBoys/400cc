#include <stdio.h>

int main() {
    char ch;
    int num = 0; 
    printf("������һ���ַ�������֮����һ���ո�ָ���\n");
    while (ch  != '\n') {
		scanf("%c",&ch);
        if (ch == ' ') {
            num++;
        }
    }
    printf("�����ַ���%d������", ++num);
    return 0;
}