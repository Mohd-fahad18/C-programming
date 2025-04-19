#include<stdio.h>

//********
// *****
//  ***
//   *
void main(){
int i,j,k,n;

printf("enter the no :");
scanf("%d",&n);
 for(i=1;i<=n;i++){
 	
 	for(j=1;j<=i;j++)
 		printf(" ");
 		
 		for(k=1;k<=n-i;k++)
 		printf("*");
 		
 		for(k=1;k<=n-i+1;k++)
 		printf("*");
 		
 		printf("\n");
    }
}



//    *
//   ***
//  *****
// *******
//*********

void main()
{int i,j,s;

for(i=1;i<=5;i++)
{
	for(s=1;s<=(5-i);s++)
	printf(" ");
		
	    for(j=1;j<=i;j++)
		printf("*");
		
		for(j=1;j<=i-1;j++)
		printf("*");
		printf("\n");
}
}


diamond
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

void main(){
int i,j,s,k,n;

printf("enter the no :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(s=1;s<=(n-i);s++)
	printf(" ");
		
	    for(j=1;j<=i;j++)
		printf("*");
		
		for(j=1;j<=i-1;j++)
		printf("*");
		printf("\n");
}

 for(i=1;i<=n;i++){
 	
 	for(j=1;j<=i;j++)
 		printf(" ");
 		
 		for(k=1;k<=n-i;k++)
 		printf("*");
 		
 		for(k=1;k<=n-i-1;k++)
 		printf("*");
 		
 		printf("\n");
    }
}



// N
// N I 
// N I E
// N I E T
void main(){
	char word[]="NIET";
	int length=strlen(word);
	int i,j;
	for(i=1;i<=length;i++){
		for(j=0;j<i;j++)
		printf(" %c",word[j]);
		printf("\n");
	}
}


//A B C D E  B C D E F
//C D E F      D E F G
//E F G          F G H
//G H              H I
//I                  I

void main(){
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++){
		
		for(j=0;j<=5-i;j++)
			printf(" %c",ch+j);
			ch=ch+1;
	
		for(j=1;j<=i;j++)
		    printf("  ");
		    
		    for(j=1;j<=i-1;j++)
		    printf("  ");
		    
		    for(j=0;j<=5-i;j++)
		    printf(" %c",ch+j);
			ch=ch+1;
		
		printf("\n");
	}
}






