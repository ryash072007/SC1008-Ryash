#include <stdio.h>
#include <math.h>
int main()
{
 /* Write your code here */

    printf("Enter a binary number:\n");
    int number;
    scanf("%d", &number);

    int val = 0;
    int power = 0;
    while (number > 0){
        int last_digit = number % 10;
        number = (number - last_digit) / 10;

        val += pow(2, power) * last_digit;
        power += 1;
    }

    printf("The equivalent decimal number: %d", val);

 return 0;
} 