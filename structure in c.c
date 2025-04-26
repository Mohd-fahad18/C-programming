#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	char name[100];
	int rollno;
	float cgpa;
};

int main(){
	struct student s1,s2;
	printf("enter the name,rollno and cgpa of student :");
	scanf("%s",s1.name);
	scanf("%d",&s1.rollno);
	scanf("%f",&s1.cgpa);
	
	//student 2
	printf("enter the name,rollno and cgpa of student :");
	scanf("%s",s2.name);
	scanf("%d",&s2.rollno);
	scanf("%f",&s2.cgpa);
	
	printf("---STUDENT 1 DETAIL---\n");
	printf("Name :%s\nRollno :%d\ncgpa : %.2f\n",s1.name,s1.rollno,s1.cgpa);
	
	printf("---STUDENT 2 DETAIL---\n");
	printf("Name :%s\nRollno :%d\ncgpa : %.2f",s2.name,s2.rollno,s2.cgpa);
	return 0;
}


//INTILIZING STRUCTURE
struct student{
	char name[100];
	int Rollno;
	float cgpa;
};

int main(){
	struct student s1={"fahad",32,8.7
	};
	struct student s2={"nabeel",45,7.7
	};
	printf("name1 = %s\n",s1.name);
	printf("name2 : %s",s2.name);
}


//TYPEDEF create alies for data type

typedef struct PersonDetail{
	char name[20];
	char adress[100];
	int pin;
} pd;

int main(){
	pd s1={"fahad","lucknow",2206101};
	pd s2={"nabeel","Noida",220412};
	printf("--detail of 1 person--\n");
	printf("name = %s\nadress = %s\npin = %d\n\n",s1.name,s1.adress,s1.pin);
	
	printf("--detail of 2 person--\n");
	printf("name = %s\nadress = %s\npin = %d",s2.name,s2.adress,s2.pin);
	
	return 0;
}


//arrays in structure
struct book{
	int id;
	char title[50];
	float price;
	
}book;

int main(){
	struct book books[3]={
	{1,"C programming",299},
    {2,"python",399.56},
	{3,"java",500.6}};
	
	int i;
	for(i=0;i<3;i++){
		printf("Book ID :%d\n",books[i].id);
		printf("Tittle :%s\n",books[i].title);
		printf("price :%.2f\n",books[i].price);
		printf("\n");
	}
	return 0;
}


//USE OF CALLOC AND REALLOC
int main(){
	int *ptr;
	int i;
	ptr=(int*) calloc(5,sizeof(int));
	
	printf("enter the 5 number :");
	for(i=0;i<5;i++){
		scanf("%d",&ptr[i]);
	}
	
	ptr = realloc(ptr, 8 * sizeof(int));     //reallocating 3 int
	printf("enter the 8 number :");
	for(i=0;i<8;i++){
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<8;i++){
		printf("number %d is %d\n",i,ptr[i]);
	}
	
}




