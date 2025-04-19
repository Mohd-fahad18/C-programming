#include<stdio.h>

//SUM OF N NUMBERS

int main(){
	int a,n;
	int x=0;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		x+=a;
		}
		printf("sum of numbers is %d",x);
	return 0;
}


//TABLE OF NUMBER INPUT BY USER

int main(){
	int n;
	printf("enter the no :");
	scanf("%d",&n);
	int x=1;
	
	for(int i=1;i<=10;i++){
		x=n*i;
		printf("%d X %d = %d\n",n,i,x);
	}
	return 0;
}


//TAKE INPUT FROM USER TILL NO BE ODD!

int main(){
	int n;
	do{
		printf("enter the no :");
		scanf("%d",&n);
		printf("%d\n",n);
		
		if(n%2 !=0){
			break;
		}
	}
	while(1);
	printf("thank you");
	
	return 0;
}


//factorial using loop

int main(){
	int n,x=1;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		x*=i;
	}
	printf("%d",x);
}



