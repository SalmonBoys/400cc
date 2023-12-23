#include<stdio.h>
int GCD(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return GCD(b,a%b);
	}
}
int LCM(int a,int b){
	return a*b/GCD(a,b);
}
int main()
{
	int num1,num2,num3;
	printf("Please enter three integers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("The GCD of the nums is %d\n",GCD(num1,GCD(num2,num3)));
	printf("The LCM of the nums is %d\n",LCM(num1,LCM(num2,num3)));
	return 0;
}
