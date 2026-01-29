#include <stdio.h>
int main()
{
 /* Write your code here */
    printf("Enter the height:\n");
    int height;
    scanf("%d", &height);
    printf("The pattern is:\n");

    for (int row = 1; row < height + 1; row++){
        for (int col_space = 0; col_space < height - row; col_space++){
            printf(" ");
        }

        for (int col_star = 0; col_star < 2 * row - 1; col_star++){
            printf("*");
        }
        printf("\n");
    }

 return 0;
} 