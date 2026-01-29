#include <stdio.h>
int main()  
{
   /* Write your code here */
   printf("Enter a number (between 1 and 9):\n");
   int num;
   scanf("%d", &num);
   printf("Multiplication Table:\n");
   printf(" ");
   for (int i = 1; i < num + 1; i++){
    printf(" %d", i);
   }
   printf("\n");
   for (int row = 1; row < num + 1; row++){
    printf("%d", row);
    for (int col = 1; col < row + 1; col++){
        printf(" %d", row * col);
    }
    printf("\n");
   }
   return 0;   
}