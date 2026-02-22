/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>
#define N 20
void findLongShortStr(char str[N][81], char *longStr, char *shortStr, int size);
int main()
{
    char str[N][81], longStr[81], shortStr[81], *p;
    int i, size;
    char dummy;

    printf("Enter number (size) of strings: \n");
    scanf("%d", &size);
    scanf("%c", &dummy);
    for (i = 0; i < size; i++)
    {
        printf("Enter string %d: \n", i + 1);
        fgets(str[i], 81, stdin);
        if (p = strchr(str[i], '\n'))
            *p = '\0';
    }
    findLongShortStr(str, longStr, shortStr, size);
    printf("longest string: %s %d\n", longStr, strlen(longStr));
    printf("shortest string: %s %d\n", shortStr, strlen(shortStr));
    return 0;
}
void findLongShortStr(char str[N][81], char *longStr, char *shortStr, int size)
{
    /*edit*/
    /* Write your code here */
    int max_size = 0;
    int min_size = 81;

    for (int i = 0; i < size; i++)
    {
        int length = strlen(str[i]);
        if (length < min_size)
        {
            strcpy(shortStr, str[i]);
            min_size = length;
        }
        if (length > max_size)
        {
            strcpy(longStr, str[i]);
            max_size = length;
        }
    }

    /*end_edit*/
}