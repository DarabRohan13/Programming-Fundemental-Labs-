#include <stdio.h>
main(){
	int category, food_ch ,bill;
	printf("Enter you food category (1 = Breakfast, 2 = Lunch, 3 = Dinner  ) =");
	scanf("%d",&category);
	switch(category){
		case 1:
			printf("Category selected = Breakfast\n");
			printf("Enter  1= Scrambled eggs , 2 = Pancakes , 3 = Oatmeal = ");
			scanf("%d",&food_ch);
			switch(food_ch){
				case 1 :
					printf("Scrambled eggs selected \n ");
					bill = 3000;
					printf("Bill = %d",bill);
					break;
				case 2 :
					printf("Pancakes selected \n");
					bill = 2000;
					printf ("Bill = %d",bill);
					break;
				case 3 :
					printf("Oatmeal selected  \n");
					bill = 2000;
					printf ("Bill = %d",bill);
					break;
				default :
				printf("You have enter an invalid choice \n");
				}
				break;	
		case 2:
			printf("Category selected = Lunch\n");
			printf("Enter  1= Chicken Karahi , 2 = Biryani  , 3 = Fish and Chips = ");
			scanf("%d",&food_ch);
			switch(food_ch){
				case 1 :
					printf("Chicken Karahi selected  \n ");
					bill = 3000;
					printf ("Bill = %d",bill);
					break;
				case 2 :
					printf(" Biryani selected  \n ");
					bill = 2000;
						printf ("Bill = %d",bill);
					break;	
				case 3 :
					printf("Fish and Chips selected  \n ");
					bill = 2000;
					printf ("Bill = %d",bill);
					break;
					default :
						printf("You have enter an invalid choice \n");
				}
				break;		
		case 3:
			printf("Category selected = Dinner\n");
			printf("Enter  1=Mexican Chicken Fajitas , 2 =Spanish Paella , 3 =Thai Pad Thai = ");
			scanf("%d",&food_ch);
			switch(food_ch){
				case 1 :
					printf("Mexican Chicken Fajitas  selected \n");
					bill = 3000;
					printf ("Bill = %d",bill);
					break;
				case 2 :
					printf("Spanish Paella selected \n");
					bill = 2000;
					printf ("Bill = %d",bill);
					break;
				case 3 :
					printf("Thai Pad Thai selected \n");
					bill = 2000;
					printf ("Bill = %d",bill);
					break;
				default :
				printf("You have enter an invalid choice  \n");		
				
				}	
				break;	
			
		default :
				printf("You have enter an invalid choice  \n");			
		
	}
	
					
						
}
