#include <stdio.h>

int main() {
    int age, education, fitness;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a bachelor's degree? (1 for Yes, 0 for No): ");
    scanf("%d", &education);

    printf("Are you physically fit? (1 for Yes, 0 for No): ");
    scanf("%d", &fitness);

    if (age >= 18 && age <= 30 && education == 1 && fitness == 1) {
    printf("Congratulations! You are eligible for Army Selection.\n");
    } else {
    printf("Sorry, you do not meet the eligibility criteria for Army Selection.\n");
    }

    return 0; 
}
