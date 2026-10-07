#include <stdio.h>

int main() {

    int a = 0;

    printf("Enter a number");
    scanf("%d", &a);

    a = a % 10;

    printf("%d", a);

    return 0;



}