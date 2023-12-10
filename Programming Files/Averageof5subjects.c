//Finding average of 5 subjects marks
#include<stdio.h>
void main()
{
    float Maths, English, Physics, Chemistry, ComputerScience;
    float Average;
    printf("Enter Maths Marks :");
    scanf("%d", &Maths);
    printf("Enter English MArks :");
    scanf("%d", &English);
    printf("Enter Physics Marks :");
    scanf("%d", &Physics);
    printf("Enter Chemistry Marks :");
    scanf("%d", &Chemistry);
    printf("Enter ComputerScience MArks :");
    scanf("%d", &ComputerScience);
    Average = (Maths + English + Physics + Chemistry + ComputerScience) / 5;
    printf("The Average of 5 Subjects is %f", Average);


}