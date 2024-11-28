#include <stdio.h>

int main() {    
    int a, b, c, x;
    while(a, b, c, x != 0){
    printf("Enter a = "); scanf("%i", &a);
    printf("Enter b = "); scanf("%i", &b);
    printf("Enter c = "); scanf("%i", &c);
    printf("Enter x = "); scanf("%i", &x);
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (min <= x &&  min%7 == 0) {
        printf("%i\n", min);
    } else {
        printf("%.2f\n", (float)min/(a+b+c - min));
    } 
    }    
    return 0;
}