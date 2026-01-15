#include<stdio.h>
int main(){
	int n,t,s=0;
	scanf("%d",&n);
	if(n>=10000&&n<=99999){
		t=n;
		while(t>0){
			s +=t%10;
			t /=10;
		}
		printf("%d\n",s);
	}else{
		printf("Invalid input\n");
	}
}
