#include <stdio.h>

int main() {

    
    int number;

    scanf("%d", &number);

    int a = number / 100;
    int b = (number / 10) % 10;
    int c = number % 10;

    printf("%d", a + b + c);

    return 0;
}