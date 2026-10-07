#include <stdio.h>

int main() {

   int a = 0;

   printf("Enter a number");
   scanf("%d", &a);

   if(a % 2 == 0){

   printf("Even");

   }
   else { printf("odd"); } 

   return 0;
}