#include <stdio.h>
void connect(char s1[], char s2[]) {
    int i = 0;
    int j = 0;
    while (s1[i] != '\0') {
        i++;
    }
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int main() {
    char str1[1000];
    char str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    connect(str1, str2);
    printf("connected string: %s\n", str1);
    return 0;
}
