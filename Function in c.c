#include<stdio.h>
//print namaste for indian and bounjour for french

//function prototype
void namaste();
void bonjour();

//function definition
void namaste(){
	printf("NAMASTE\n");
}
void bonjour(){
	printf("BONJOUR\n");
}

//code of program
int main(){
	char ch;
	printf("enter the nationality i for indian f for french :");
	scanf("%c",&ch);
	
	if(ch=='i'){
		namaste();//function call
		}
		else if(ch=='f'){
			bonjour();//function call
	}
	else{
		printf("plase enter given identity only!");
	}
     return 0;
}




//sum of 2 no using functions

int sum(int a,int b);

int main(){
	int a,b;
	printf("enter the first no :");
	scanf("%d",&a);
	
	printf("enter the second no :");
	scanf("%d",&b);
	
	int s=sum(a,b);
	printf("sum is :%d\n",s);
	
	return 0;
}

int sum(int x,int y){
	return x+y;
}



//SUM OF N NATURAL NUMBER USING RECRSION
int sum(int n);

int main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	printf("sum of first %d number is :%d",n,sum(n));
	return 0;
}

int sum(int n){
	if(n==1){
		return 1;
	}
	int sumNm1=sum(n-1);
	int sumN=sumNm1+n;
	return sumN;
}



//FACTORIAL OF N
int factorial(double n);

int main(){
	int n;
	printf("enter the number :");
 	scanf("%d",&n);
 	
 	printf("Factorial of %d is : %d",n,factorial(n));
	return 0;
}

int factorial(double n){
		if(n==1){
		return 1;
	}
	int fact=factorial(n-1)*n;
	return fact;
}



//PERCENTAGE OF STUDENT IN PHY CHEM AND MATHS 

int percentage(int physics,int chemisty,int maths);

int percentage(int physics,int chemisty,int maths){
	return (physics + chemisty + maths)/3;
}

int main(){
	int p,c,m;
	printf("enter the number of physics : ");
	scanf("%d",&p);
	
	printf("enter the number of physics : ");
	scanf("%d",&c);
	
	printf("enter the number of physics : ");
	scanf("%d",&m);
	
	printf("---RESULT---\n");
	printf("percentage of student is : %d",percentage(p,c,m));
	
	return 0;
}
