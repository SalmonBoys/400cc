#include<stdio.h>
#include<string.h>
#define max 100
int main(){
	char str1[max],str2[max],temp[max];
	printf("please enter the str1:");
	gets(str1);
	printf("please enter the str2:");
	gets(str2);
	if(strlen(str1)>strlen(str2)){
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
	}
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	return 0;
}
