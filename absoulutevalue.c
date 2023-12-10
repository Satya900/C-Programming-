#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);

    if(x >= 0) printf("The Absoulute value is %d",x);
    if(x < 0) printf(" The absolute value is %d", x * -1);
}