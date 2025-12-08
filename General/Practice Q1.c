#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	char op[3];
	printf("Enter First number :" );
	scanf("%d", &a);
	printf("Enter Second number :");
	scanf("%d", &b);
	printf("Enter operator (+, -, *, /): ");
    scanf("%s", op);
	
    //printf("You Entered: %c",op);
  if(strcmp(op,"+")==0){
  	printf("Result = %d\n", a+b);
	  }
  	 else if(strcmp(op, "-") == 0) {
        printf("Result = %d\n", a - b);
    }
    else if (strcmp(op, "*") == 0) {
    	printf("Result = %d\n", a * b);
	}
	else if (strcmp(op, "/") == 0) {
		if(b!=0)
		printf("Result = %d\n", a/b);
		else{
			printf("Error: Division by zero is not possible");
		}
	}
	else{
		printf("Invalid operator");
	}
  
	return 0;
}
