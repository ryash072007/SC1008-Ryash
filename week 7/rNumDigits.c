/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
int rNumDigits1(int num);
void rNumDigits2(int num, int *result);
int main()
{
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rNumDigits1(): %d\n", rNumDigits1(number));
    rNumDigits2(number, &result);
    printf("rNumDigits2(): %d\n", result);
    return 0;
}
int rNumDigits1(int num)
{
    /*edit*/
    /* Write your code here */

    if (num == 0) {
        return 0;
    }

    int left = num / 10;
    int numDigits = rNumDigits1(left);

    return numDigits + 1;

    /*end_edit*/
}
void rNumDigits2(int num, int *result)
{
    /*edit*/
    /* Write your code here */
    if (num == 0) {
        *result = 0;
        return;
    }

    int left = num / 10;
    rNumDigits2(left, result);

    *result = *result + 1;
    /*end_edit*/
}