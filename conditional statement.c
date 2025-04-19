#include <stdio.h>

//program to write upper case to lower case and (vice versa)
//USING IF,ELSE IF

int main(){
	char c;
	printf("enter the charecter :");
	scanf("%c",&c);
	
	if(c>'A'&&c<='Z'){
		printf("%c",c+32);
	}
	else if(c>='a'&&c<='z'){
		printf("%c",c-32);
	}
	else{
		printf("plase enter the valid charecter !");
	}
    return 0;
}



//CALCULATOR

#include <stdio.h>

int main() {
    int a;
    int b;
    char c;

    printf("Enter the operation (+ - / *) : ");
    scanf(" %c", &c);

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    if (c == '+') {
        printf("Result: %d\n", a + b);
    } else if (c == '-') {
        printf("Result: %d\n", a - b);
    } else if (c == '*') {
        printf("Result: %d\n", a * b);
    } else if (c == '/') {
        if (b != 0) {
            printf("Result: %d\n", a / b);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Please enter a valid operation!\n");
    }

    return 0;
}

//DAYS USING SWITCH CASE
int main(){
	int day;
	printf("enter the no (1-7) :");
	scanf("%d",&day);
	
	switch(day){
		case 1 : printf("monday");
		    break;
		case 2 :printf("tuesday");
		    break;
		case 3 :printf("wednesday");
		    break;
		case 4 :printf("thursday");
		    break;
		case 5 :printf("friday");
		    break;
		case 6 :printf("saturday");
		    break;
		case 7 :printf("sunday");
		    break;
		default : printf("not a valid day !");
	}
	    return 0;
}



//LEAP YEAR 

int main(){
	int y;
	printf("enter the year :");
	scanf("%d",&y);
	
	if((y%4==0&&y%100!=0)||(y%400==0)){
		printf("Year is a leap year");
	}
	else{
		printf("not a leap year");
	}
	return 0;
}


//CALCULATOR USING SWITCH CASE

#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to consume any leftover newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

