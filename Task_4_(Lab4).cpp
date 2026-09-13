#include <stdio.h>
main(){
	int membershiptype ,shift;
	float monthlyfee;
	printf("Enter your membership (1 = Student, 2 = Regular, 3 = Senior Citizen ) :");
	scanf("%d",&membershiptype);
	printf("Enter your shift:");
	scanf("%d",&shift);
	switch(membershiptype){
		case 1: 
			if (shift==1){
				monthlyfee = 2000 - (2000*0.15);
			}
			else{
				monthlyfee = 2000;
			}
			break;
		case 2: 
			if (shift==1){
				monthlyfee = 3500 - (3500*0.15);
			}
			else{
				monthlyfee = 3500;
			}
			break;
		case 3: 
			if (shift==1){
				monthlyfee = 2500 - (2500*0.15);
			}
			else{
				monthlyfee = 2500;
			}
			break;
		default:
            printf("Invalid account type entered.\n");
	}
    printf("Monthly Fee is: Rs. %.2f\n",monthlyfee);
    return 0;    
				
}
