#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 10

// 定义电话号码记录数组
char names[MAX_RECORDS][50];
char addresses[MAX_RECORDS][100];
char phoneNumbers[MAX_RECORDS][12];

// 折半查找函数
int binarySearch(char phoneNumbers[][12], int low, int high, char phoneNumber[]) {
    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(phoneNumbers[mid], phoneNumber);
        
        if (cmp == 0) {
            return mid;  // 找到匹配的电话号码
        } else if (cmp < 0) {
            low = mid + 1;  // 在右半部分继续查找
        } else {
            high = mid - 1;  // 在左半部分继续查找
        }
    }
    
    return -1;  // 没找到匹配的电话号码
}

int main() {char searchNumber[12]; 
int index = binarySearch(phoneNumbers, 0, MAX_RECORDS - 1, searchNumber);
    // 假设已经有一个电话号码表，这里手动填充一些示例数据
    strcpy(names[0], "Alice");
    strcpy(addresses[0], "123 Main St");
    strcpy(phoneNumbers[0], "1234567890");

    strcpy(names[1], "Bob");
    strcpy(addresses[1], "456 Elm St");
    strcpy(phoneNumbers[1], "2345678901");

    // ... 填充更多记录

    strcpy(names[9], "Jenny");
    strcpy(addresses[9], "789 Oak St");
    strcpy(phoneNumbers[9], "9876543210");

    
    printf("请输入要查找的电话号码：");
	printf("%s",phoneNumbers[0]);
    scanf("%s", searchNumber);

    // 调用折半查找函数查找电话号码对应的记录
   

    if (index != -1) {
        printf("户主姓名：%s\n", names[index]);
        printf("户主地址：%s\n", addresses[index]);
    } else {
        printf("未找到匹配的电话号码。\n");
    }

    return 0;
}