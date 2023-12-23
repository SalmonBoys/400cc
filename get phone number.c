#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 10

// ����绰�����¼����
char names[MAX_RECORDS][50];
char addresses[MAX_RECORDS][100];
char phoneNumbers[MAX_RECORDS][12];

// �۰���Һ���
int binarySearch(char phoneNumbers[][12], int low, int high, char phoneNumber[]) {
    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(phoneNumbers[mid], phoneNumber);
        
        if (cmp == 0) {
            return mid;  // �ҵ�ƥ��ĵ绰����
        } else if (cmp < 0) {
            low = mid + 1;  // ���Ұ벿�ּ�������
        } else {
            high = mid - 1;  // ����벿�ּ�������
        }
    }
    
    return -1;  // û�ҵ�ƥ��ĵ绰����
}

int main() {char searchNumber[12]; 
int index = binarySearch(phoneNumbers, 0, MAX_RECORDS - 1, searchNumber);
    // �����Ѿ���һ���绰����������ֶ����һЩʾ������
    strcpy(names[0], "Alice");
    strcpy(addresses[0], "123 Main St");
    strcpy(phoneNumbers[0], "1234567890");

    strcpy(names[1], "Bob");
    strcpy(addresses[1], "456 Elm St");
    strcpy(phoneNumbers[1], "2345678901");

    // ... �������¼

    strcpy(names[9], "Jenny");
    strcpy(addresses[9], "789 Oak St");
    strcpy(phoneNumbers[9], "9876543210");

    
    printf("������Ҫ���ҵĵ绰���룺");
	printf("%s",phoneNumbers[0]);
    scanf("%s", searchNumber);

    // �����۰���Һ������ҵ绰�����Ӧ�ļ�¼
   

    if (index != -1) {
        printf("����������%s\n", names[index]);
        printf("������ַ��%s\n", addresses[index]);
    } else {
        printf("δ�ҵ�ƥ��ĵ绰���롣\n");
    }

    return 0;
}