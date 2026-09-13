#include <stdio.h>

int main() {
    int zonetype, speed, exceed;
    float fine;
    printf("Enter zone type (1=School Zone, 2=Highway, 3=Residential Area): ");
    scanf("%d", &zonetype);
    printf("Enter driver's speed (km/h): ");
    scanf("%d", &speed);
    switch (zonetype) {
        case 1:
            if (speed <= 30) {
                printf("No violation. Speed is within the limit.\n");
            }
            else {
                exceed = speed - 30;
                if (exceed > 20) {
                    fine = 1000 * 2;
                    printf("Violation detected and Fine doubled \n");
                }
                else {
                    fine = 1000;
                    printf("Violation detected.\n");
                }
            }
            break;

        case 2:
            if (speed <= 100) {
                printf("No violation.\n");
            }
            else {
                exceed = speed - 100;
                if (exceed > 20) {
                    fine = 1000 * 2;
                    printf("Violation detected and Fine doubled.\n");
                }
                else {
                    fine = 1000;
                    printf("Violation detected.\n");
                }
            }
            break;

        case 3:
            if (speed <= 50) {
                printf("No violation.\n");
            }
            else {
                exceed = speed - 50;
                if (exceed > 20) {
                    fine = 1000 * 2;
                    printf("Violation detected and Fine doubled.\n");
                }
                else {
                    fine = 1000;
                    printf("Violation detected.\n");
                }
            }
            break;

        default:
            printf("Invalid zone type entered.\n");
    }
	printf("Final fine amount: Rs. %.2f\n", fine);
    return 0;
}
