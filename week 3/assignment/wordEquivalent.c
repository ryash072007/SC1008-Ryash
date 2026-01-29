#include <stdio.h>
int main()
{
 /* Write your code here */
    printf("Enter the number:\n");
    int number;
    scanf("%d", &number);
    printf("wordEquivalent(): ");

    if (number > 99) {
        printf("Input exceeds 99");
        return 0;
    }

    char nums[10][5] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    while (number > 0) {
        int last_digit = number % 10;
        number = (number - last_digit) / 10;
        printf(nums[last_digit]);
        printf(" ");
    }

 return 0;
} 