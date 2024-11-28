#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c, x;
    while(a, b, c, x != 0){
    FILE *logFile;
    logFile = fopen("log.txt", "a");   
    printf("Enter a = "); scanf("%i", &a); 
    fprintf(logFile, "a =  %i\n", a);
    printf("Enter b = "); scanf("%i", &b); 
    fprintf(logFile, "b =  %i\n", b);
    printf("Enter c = "); scanf("%i", &c); 
    fprintf(logFile, "c =  %i\n", c);
    printf("Enter x = "); scanf("%i", &x); 
    fprintf(logFile, "x =  %i\n", x);
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (min <= x &&  min%7 == 0) {
        printf("%i\n", min);
        fprintf(logFile, "%i\n", min);
    } else {
        printf("%.2f\n", (float)min/(a+b+c - min));
        fprintf(logFile, "Ответ %.2f\n",(float)min/(a+b+c - min));
    }
    fclose(logFile); 
    }
    return 0;
}