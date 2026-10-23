#include <stdio.h>
#include <math.h>

int main(){

    int a, b, g;
    printf("Δωσε πλευρα 1\n");
    scanf("%d", &a);
    printf("Δωσε πλευρα 2\n");    
    scanf("%d", &b);
    g = a*a + b*b;
    g =sqrt(g);
    printf("Η τριτη πλευρα ειναι: %d\n", g);

    
    return 0;
}