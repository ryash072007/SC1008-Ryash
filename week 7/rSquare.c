/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
int rSquare1(int num);
void rSquare2(int num, int *result);
int main()
{
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rSquare1(): %d\n", rSquare1(number));
    rSquare2(number, &result);
    printf("rSquare2(): %d\n", result);
    return 0;
}
int rSquare1(int num)
{
    /*edit*/
    /* Write your code here */
    if (num == 1) {
        return 1;
    }

    int square = rSquare1(num - 1);
    square += 2 * num - 1;

    return square;

    /*end_edit*/
}
void rSquare2(int num, int *result)
{
    /*edit*/
    /* Write your code here */
    if (num == 1) {
        *result = *result + 1;
        return;
    }

    rSquare2(num - 1, result);

    *result = *result + 2 * num - 1;

    /*end_edit*/
}