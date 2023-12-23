#include<stdio.h>;
#include<string.h>;
int main(){
	int st1=0,st2=0,st3=0;
	while(1){
	    char name[100];
		printf("please enter the candidates'names:");
		gets(name);
		if(strcmp(name,"stu1")==0)
			st1++;
		else if(strcmp(name,"stu2")==0)
			st2++;
		else if(strcmp(name,"stu3")==0)
			st3++;
		else if(strcmp(name,"stu0")==0)
			break;}
	printf("stu1 gets %d votes\n",st1);
    printf("stu2 gets %d votes\n",st2);
	printf("stu3 gets %d votes\n",st3);
	return 0;
}