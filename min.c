#include<stdio.h>
int min(int a,int b){
	if(a<b)
		return a;
	else
		return b;
}
int main(){
	int a,b,c,d,minnum;
	printf("Please enter four integers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	minnum=min(min(a,b),min(c,d));
	printf("The smallest of the four integers is %d\n",minnum);
	return 0;
}