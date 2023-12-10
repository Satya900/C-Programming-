#include<stdio.h>
void main()
{
    float P, R, T, SI, Amount;
    printf("Principal Value :");
    scanf("%f", &P);
    printf("Rate Of Interest :");
    scanf("%f", &R);
    printf("Time:");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    printf("The Simple interest is %f",SI);
    Amount = SI + P;
    printf("The Amount is %f", Amount);
}