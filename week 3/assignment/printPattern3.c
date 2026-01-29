#include <stdio.h>
int main()
{
   /* Write your code here */
   printf("Enter the height:\n");
    int height;
    scanf("%d", &height);
    printf("The pattern is:\n");
    
    for (int row = 0; row < height; row++){
        for (int col = 0; col < row + 1; col++){
            printf("%d", (row + col + 1) % 10);
        }
        printf("\n");
    }
   return 0;
}