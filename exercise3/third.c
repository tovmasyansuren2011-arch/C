#include <stdio.h>

int main() {

    int a = 0;

    printf("Enter a number");
    scanf("%d", &a);

    if(a % 3 == 0 && a % 5 == 0) {
        printf("Yes");
    } 
    else { 
        printf("No"); 
    }

    return 0;
}