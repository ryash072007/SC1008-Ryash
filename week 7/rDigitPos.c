/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);
int main()
{
    int number, digit, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    printf("rDigitPos1(): %d\n", rDigitPos1(number, digit));
    rDigitPos2(number, digit, &result);
    printf("rDigitPos2(): %d\n", result);
    return 0;
}
int rDigitPos1(int num, int digit)
{
    /*edit*/
    /* Write your code here */
    if (num == 0)
    {
        return 0;
    }

    int last_digit = num % 10;
    int left_side = num / 10;

    int pos = rDigitPos1(left_side, digit);

    if (pos != 0)
    {
        pos++;
    }

    if (last_digit == digit)
    {
        pos = 1;
    }

    return pos;

    /*end_edit*/
}
void rDigitPos2(int num, int digit, int *pos)
{
    /*edit*/
    /* Write your code here */
    if (num == 0)
    {
        *pos = 0;
        return;
    }

    int last_digit = num % 10;
    int left_side = num / 10;

    rDigitPos2(left_side, digit, pos);

    if (*pos != 0)
    {
        *pos = *pos + 1;
    }

    if (last_digit == digit)
    {
        *pos = 1;
    }
    /*end_edit*/
}