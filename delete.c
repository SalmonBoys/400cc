#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],de;
	char nstr[100];
	int j=0,k=0;
	printf("please enter a string:");
	gets(str);
	printf("please enter the char which you want to delete:");
	scanf("%c",&de);
	for(k=0;str[k]!='\0';k++){
		if(str[k]!=de){
			if(str[k]>='A'&&str[k]<='Z')
				nstr[j]=str[k]+32;
			else
				nstr[j]=str[k];
			j++;
		}
	}
	nstr[j]='\0';
	printf("the string afer deleting:%s\n",nstr);
	return 0;
}