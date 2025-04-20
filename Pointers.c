#include<stdio.h>

//pointers

int main(){
	int a = 10;
	int *b = &a;
	
	printf("%d\n",a);  //print a
	printf("%d\n",b);  //print adress of a
	printf("%d\n",&a); // address of a
	printf("%d\n",&b); // adress of b
	printf("%d",*(&a));//adress of a pr kya store h
	printf("%d\n",*b); // print value of a & adress of a pr kya store h
    
}


//pointer in 3 variable
int main(){
	int a = 10;
	int *b = &a;
	int **c = &b; // c m adress of b 
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",*b);
	printf("%d\n",c);
	printf("%d\n",*c); //value of b
	printf("%d\n",**c); //adress of b k andr adress of a k andr ki value or value of a
}


//using pointer in function(call  by reference)

void square(int n);
void _square(int *n);

void square(int n){
	n = n*n;
	printf("square = %d\n",n);
}
void _square(int *n){
	*n = (*n)*(*n);// 4*4 and give the the adress of n 16
	printf("square = %d\n",*n);
}

int main(){
	int number = 4;
	square(number);
	printf("number = %d\n",number);
	
	_square(&number); //adress of n
	printf("number = %d\n",number);
}


//Swap(exchange) 2 number a&b.

void _swap(int *a,int *b);

//call by reference
void _swap(int *a,int *b)//we use pointer so that value change as it work on adress not value
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main(){
	int x=3,y=5;
	_swap(&x,&y);
	printf("x = %d & y = %d\n",x,y);
}


//calculate sum,product,avg of 2number
//we use pointer bcz fxn give only 1 value

void dowork(int a,int b,int *sum,int *prod,int *avg);

int main(){
	int a = 3,b=5;
	int sum,prod,avg;
	dowork(a,b,&sum,&prod,&avg);
	printf("sum = %d\nprod = %d\navg = %d",sum,prod,avg);
	return 0;
}

void dowork(int a,int b,int *sum,int *prod,int *avg){
	*sum =a+b;
	*prod = a*b;
	*avg = (a+b)/2;
}


//Pointer aliasing

int main(){
	int x = 100;
	int *ptr1 = &x;
	int *ptr2 = &x; //Alias of ptr
	
	printf("value of x using ptr1 :%d\n",*ptr1);
	printf("value of x using ptr2 :%d\n",*ptr2);
	
	*ptr1 = 200;  //modifying x using pointer 
	
	printf("value of x after modification using ptr1 : %d\n",*ptr2);
	
	return 0;
}

