#include<stdio.h>
#include<string.h>
#define MAX 100 
int main()
{
char str1[MAX],str2[MAX],temp[MAX];
printf("Please enter the first string:");
gets(str1);
printf("Please enter the second string:");
gets(str2);
if(strlen(str1)>strlen(str2))
{
strcpy(temp,str2);
strcpy(str2,str1);
strcpy(str1,temp);
}
printf("str1:%s\n",str1);
printf("str2:%s\n",str2);
return 0;
}