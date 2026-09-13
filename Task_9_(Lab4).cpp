#include <stdio.h>

int main() {
    float billamount, discount, finalbill;
    int hour, ismember;
    printf("Enter bill amount: ");
    scanf("%f", &billamount);
    printf("Enter hour of visit (24-hour format): ");
    scanf("%d", &hour);
    printf("Is the customer a member? (1=Yes, 0=No): ");
    scanf("%d", &ismember);
    discount = 0;
    if (hour >= 15 && hour <= 17) {
        discount = discount + 20;
    }
    if (ismember == 1) {
        discount = discount + 10;
    }
    if (discount > 25) {
        discount = 25;
    }
    finalbill = billamount - (billamount * discount / 100);
    printf("Total discount applied: %.2f%%\n", discount);
    printf("Final payable bill: Rs. %.2f\n", finalbill);
    return 0;
}
