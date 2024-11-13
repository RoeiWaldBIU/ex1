#include <stdio.h>

int main() {
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    int number;
    printf("Please enter a number:\n");
    scanf("%d" , & number);
    int even_odd = ~(number & 1) & 1;
    printf("%d\n", even_odd);
}
;