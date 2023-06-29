#include<stdio.h>
	int addition(int a,int b){
		int sum=a+b;
		return sum;
	}
	
	int subtraction(int a,int b){
		int sub=a-b;
		return sub;
	}
	
	int multiply(int a,int b){
		int mul=a*b;
		return mul;
	}
	
	int divide(int a,int b){
		int div=a/b;
		return div;
	}
	
	int modulo(int a,int b){
		int mod=a%b;
		return mod;
	}
	
int main(){
	int n;
	int fn,sn;
	do{
	printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 for exit\n");
	printf("Enter your choice:");
	scanf("%d",&n);

			

		
	switch(n)
		{	
				
		case 1:printf("Enter the first number:");
		scanf("%d",&fn);
		printf("Enter the second number:");
		scanf("%d",&sn);
		printf("Addition of %d and %d is %d",fn,sn,addition(fn,sn));
			break;
		
		case 2:printf("Enter the first number:");
		scanf("%d",&fn);
		printf("Enter the second number:");
		scanf("%d",&sn);
		printf("subraction of %d and %d is %d",fn,sn,subtraction(fn,sn));
			break;
		
		
		case 3:printf("Enter the first number:");
		scanf("%d",&fn);
		printf("Enter the second number:");
		scanf("%d",&sn);
		printf("Multiply of %d and %d is %d",fn,sn,multiply(fn,sn));
			break;
		
		case 4:printf("Enter the first number:");
		scanf("%d",&fn);
		printf("Enter the second number:");
		scanf("%d",&sn);
		printf("Divide of %d and %d is %d",fn,sn,divide(fn,sn));
			break;
		
		case 5:printf("Enter the first number:");
		scanf("%d",&fn);
		printf("Enter the second number:");
		scanf("%d",&sn);
		printf("Modulo of %d and %d is %d",fn,sn,modulo(fn,sn));
		break;
		
		default: break;
		}
		
		}while(n != 0);
		return 0;
}
