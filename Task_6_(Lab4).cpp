#include <stdio.h>

int main() {
    int plan, minused;
    float totalbill;
    int extramin;
    printf("Enter plan choice (1-4): ");
    scanf("%d", &plan);
    printf("Enter minutes used: ");
    scanf("%d", &minused);
    switch (plan) {
        case 1:
            if (minused > 1000) {
                extramin = minUsed - 1000;
                totalbill = 500 + (extraMin * 2);
            } else {
                totalbill = 500;
            }
            break;
        case 2:
            if (minused > 2000) {
                extramin = minused - 2000;
                totalbill = 800 + (extramin * 2);
            } else {
                totalbill = 800;
            }
            break;
        case 3:
            totalbill = 1200;
            break;
        case 4:
            totalbill = minused * 1;
            break;
        default:
            printf("Invalid plan selected.\n");
            return 0;
    }
    printf("Total bill: Rs. %.2f\n", totalBill);

    return 0;
}
