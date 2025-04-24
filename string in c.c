#include<stdio.h>

void printstring(char arr[]);

int main(){
	char firstname[] = "Hello";
	char secondname[]= "World";
	
	printstring(firstname);
	printstring(secondname);
	return 0;
}
void printstring(char arr[]){
	int i;
	for(i=0;arr[i] !='\0';i++){
		printf("%c",arr[i]);
	}
	printf("\n");
}


USE OF PUT
int main(){
	char firststr[100]="Hello ";
	char secstr[]="World";
	
	strcat(firststr,secstr);
	puts(firststr);
}


//ADD SALTING IN STRING
#include<string.h>
#include<stdio.h>
void salting(char pass[]);

int main(){
	char pass[100];
	scanf("%s",pass);
	salting(pass);
}

void salting(char pass[]){
	char salt[]="123";
	char newpass[200];
	
	strcpy(newpass,pass);//add new pass in old pass
	strcat(newpass,salt);//new pass+ 123
	puts(newpass);
}


//COUNT VOWELS

int countvowel(char str[]);

int main(){
	char str[]="HelloWorld";
	printf("vowels are : %d",countvowel(str));
}

int countvowel(char str[]){
	int count=0;
	int i;
	
	for(i=0; str[i] != '\0';i++ ){
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
	 str[i] == 'o' || str[i] == 'u'){
	 	count++;
	 }
     }
     return count;
}


//COUNT NUMBER OF CONSONENT

int consonent(char str[]);

int main(){
	char str[] = "HelloWorld";
	printf("consonent are %d",consonent(str));
	return 0;
}

int consonent(char str[]){
	int i,count =0;
	for(i=0;str[i]!='\0';i++){
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
	 str[i] == 'o' || str[i] == 'u'){
	 	 continue;
	 }
	 else{
	 	count++;
	 }
	}
	return count;
}
