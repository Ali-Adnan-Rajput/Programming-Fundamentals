#include<stdio.h>
int main(){
	int i,j;
	for(i=1; i<=3; i++){
		for(j=1; j<=3; j++){
			printf("(%d, %d)\n", i,j);
		}
}

// rectangular [attern printing

for(i=1; i<=4; i++){
		for(j=1; j<=5; j++){
			printf("*");
		}
		printf("\n");
}
printf("\n");
//        end         

for(i=3; i<=1; i--){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
}
//        end

// inverted pattern printing

for(i=4; i>=1; i--){
		for(j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
}
}
}
