#include<stdio.h>
#include<math.h>
int squ(n){
	int a;
	a=sqrt(n);
	return a*a==n;
}
int main(){
	int a,b,c,d,i;
	for(i=1000;i<=9999;i++){
		a=i/1000;
		b=(i/100)%10;
		c=(i/10)%10;
		d=i%10;
		if(a+c==10&&b*d==12&&squ(i))
			printf("%d is the number we looking for\n",i);
	}
}