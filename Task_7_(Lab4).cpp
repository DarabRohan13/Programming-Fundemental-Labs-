#include <stdio.h>

int main() {
    int policystatus,vehicleage;
    float claimamount,approvedamount;
    printf("Enter policy status (1=Active, 0=Inactive): ");
    scanf("%d", &policystatus);
    printf("Enter vehicle age (years): ");
    scanf("%d", &vehicleage);
    printf("Enter claim amount: ");
    scanf("%f", &claimamount);
    if (policystatus == 0) {
        printf("Claim rejected,\n");
    }
    else if (vehicleage > 15) {
        printf("Claim rejected.\n");
    }
    else if (claimamount > 500000) {
        printf("Claim rejected,\n");
    }
    else if (vehicleage >= 10 && vehicleage <= 15) {
        approvedamount = claimamount * 0.5;
        printf("Claim is approved Approved amount: Rs. %.2f (50%% due to vehicle age)\n", approvedamount);
    }
    else {
        approvedamount = claimamount;
        printf("Claim approved. Approved amount: Rs. %.2f\n", approvedamount);
    }

    return 0;
}
