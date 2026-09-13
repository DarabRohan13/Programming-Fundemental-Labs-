#include <stdio.h>

int main() {
    int persons,totalweight;
    printf("Enter number of people: ");
    scanf("%d", &persons);
    printf("Enter total combined weight (kg): ");
    scanf("%d", &totalweight);
    if (persons > 10 && totalweight > 1000) {
        printf("No Entry as both people limit and weight limit exceeds.\n");
    }
    else if (persons > 10) {
        printf("No Entry as maximum people exceeds limit.\n");
    }
    else if (totalweight > 1000) {
        printf("No Entry as maximum weight exceeds capacity.\n");
    }
    else {
        printf("Elevator can operate normally.\n");
    }
    return 0;
}
