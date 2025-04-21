#include<stdio.h>
 int main(){
 	int marks[3];
 	printf("enter phy :");
 	scanf("%d",&marks[0]);
 	
 	printf("enter chem :");
 	scanf("%d",&marks[1]);
 	
 	printf("enter maths :");
 	scanf("%d",&marks[2]);
 	
 	printf("\n---YOUR SCORE---\n");
 	printf("physics = %d\nchemistry = %d\nmaths = %d\n",marks[0],marks[1],marks[2]);
 	
 	return 0;
 }


//ARRAY AS ARGUMENT

void printNumber(int arr[],int n);

int main (){
	int arr[]={1,2,3,4,5,6};
	PrintNumber(arr, 6);
	return 0;
}
void PrintNumber(int arr[],int n){
	int i;
	for(i=0;i<n;i++) {
	printf("%d\t",arr[i]);
	}
	printf("\n");
} 


//REVERSE THE STRING 

int reverse(int arr[], int n);
void printArr(int arr[],int n);

int main(){
	int arr[]={1,2,3,4,5,6};
	reverse(arr,5);
	printArr(arr,5);
	return 0;
} 
void printArr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int reverse(int arr[], int n){
	int i;
	for(i=0;i<n/2;i++){
		int fval=arr[i];
		int sval = arr[n-i-1];
		arr[i]=sval;
		arr[n-i-1]= fval;
	}
}


//MULTIPLICATION WITH 2 IN ARRAY

int main(){
	int arr[5];
	int j,n,i;
	
	for(j=0;j<5;j++){
		printf("enter the number :");
		scanf("%d",&arr[j]);
	}
	
	printf("Original value \n");
	
	for(i = 0;i < 5;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	for(i = 0;i < 5;i++){
		arr[i]*=2;
	}
	printf("Modify value\n");
	for(i = 0;i < 5;i++){
	printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}


//2D ARRAY 
int main(){
	int matrix[2][3]={{1,2,3},{6,7,8}};
	printf("Two dimension array :\n");
	int i,j;
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//MATRIX ADDITION
void main(){
	int i,j,n,m;
	
	 printf("Enter rows and column : ");
    scanf("%d%d",&n,&m);
    
	int matrix1[n][m];
	int matrix2[n][m];
	int matrix3[n][m];
	
	printf("---MATRIX 1---\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("matrix1[%d][%d] :",i,j);
	scanf("%d",&matrix1[i][j]);
	}
	}
	printf("---MATRIX 2---\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("matrix2[%d][%d] :",i,j);
	scanf("%d",&matrix2[i][j]);
	}
	}
	printf("\n---MATRIX 1 + MATRIX 2---\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		
	matrix3[i][j]=matrix1[i][j] + matrix2[i][j];
	printf("%d\t",matrix3[i][j]);
    }
    printf("\n\n");
    }
}


//SUM OF DIAGONALS

void main(){
	int i,j,n,m;
	
	 printf("Enter rows and column : ");
    scanf("%d%d",&n,&m);
    
	int matrix1[n][m];
	int matrix2[n][m];
	int matrix3[n][m];
	
	printf("---MATRIX 1---\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("matrix1[%d][%d] :",i,j);
	scanf("%d",&matrix1[i][j]);
	}
	}
	printf("---MATRIX 2---\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("matrix2[%d][%d] :",i,j);
	scanf("%d",&matrix2[i][j]);
	}
	}
	printf("\n---MATRIX 1 + MATRIX 2---\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		
	matrix3[i][j]=matrix1[i][j] + matrix2[i][j];
	printf("%d\t",matrix3[i][j]);
    }
    printf("\n\n");
    }
	int sum=0;
	for(i=0;i<n;i++){
		sum += matrix3[i][i];
	}
	printf("sum of diagonals :%d\n",sum);
}
