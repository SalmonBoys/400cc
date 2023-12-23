#include <stdio.h>

int main() {
    char ch;
    int num = 0; 
    printf("请输入一行字符，单词之间用一个空格分隔开\n");
    while (ch  != '\n') {
		scanf("%c",&ch);
        if (ch == ' ') {
            num++;
        }
    }
    printf("该行字符有%d个单词", ++num);
    return 0;
}