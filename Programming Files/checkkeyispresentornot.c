#include <stdio.h>

int main() {
  
    int a[5];
    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int valueToCheck;
    printf("Enter the value to check: ");
    scanf("%d", &valueToCheck);

    int found = 0;
    
    switch (valueToCheck) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            found = 1;
            break;
        default:
            found = 0;
    }

    if (found) {
        printf("%d is present in the array.\n", valueToCheck);
    } else {
        printf("%d is not present in the array.\n", valueToCheck);
    }

    return 0;
}
