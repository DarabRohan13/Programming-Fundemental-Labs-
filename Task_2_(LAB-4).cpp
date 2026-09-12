#include <stdio.h>
main(){
	int testmarks, fscmarks;
	float finalmarks;
	printf("Enter Test marks :");
	scanf("%d",&testmarks);
	printf("Enter Fsc marks :");
	scanf("%d",&fscmarks);
	finalmarks = fscmarks+testmarks/200;
	if (finalmarks >= 80){
		printf("Your Field is CS");
	}
	else if (finalmarks <= 79 && finalmarks >= 65 ){
		printf("Your Field is SE");
	}
	else if (finalmarks <= 64 && finalmarks >= 50 ){
		printf("Your Field is IT");
	}
	else {
		printf("Rejected");	
	}
	
}
