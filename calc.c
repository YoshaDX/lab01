#include <stdio.h>

int main(){

    float number1, number2, sum, mi;
    printf("Enter two integers.\n");
    scanf("%f", &number1);
    scanf("%f", &number2);
    sum = number1 + number2;
    printf("Your sum is: %1.1f\n", sum);
    mi = number1 - number2;
    printf("Your sum is: %1.1f\n", mi);
    return 0;
}