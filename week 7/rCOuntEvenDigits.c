/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);
int main()
{
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
    rCountEvenDigits2(number, &result);
    printf("rCountEvenDigits2(): %d\n", result);
    return 0;
}
int rCountEvenDigits1(int num)
{
    /*edit*/
    /* Write your code here */
    // Base Case
    if (num < 10)
    {
        if (num % 2 == 0)
        {
            return 1;
        }

        return 0;
    }

    int last_digit = num % 10;
    int left_side = num / 10;

    int count = rCountEvenDigits1(left_side);

    if (last_digit % 2 == 0)
    {
        return count + 1;
    }

    return count;

    /*end_edit*/
}
void rCountEvenDigits2(int num, int *result)
{
    /*edit*/
    /* Write your code here */
    if (num < 10)
    {
        if (num % 2 == 0)
        {
            *result = *result + 1;
        }

        return;
    }

    int last_digit = num % 10;
    int left_side = num / 10;

    rCountEvenDigits2(left_side, result);

    if (last_digit % 2 == 0)
    {
        *result = *result + 1;
    }

    /*end_edit*/
}