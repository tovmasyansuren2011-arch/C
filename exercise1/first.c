#include <stdio.h>

int main() {
   
    int number = 0;
    int reversed = 0;

    printf("Enter a number");
    scanf("%d", &number);

    while(number > 0) {

    int digit = number % 10;
    reversed = reversed * 10 + digit;
     number = number / 10;
    }
    printf("%d", reversed);

    return 0;
}