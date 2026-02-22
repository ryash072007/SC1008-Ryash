/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);
int main()
{
    char str[40];

    printf("Enter a sequence of characters: \n");
    scanf("%s", str);
    printf("compressStr(): ");
    compressStr(str);
    return 0;
}
void compressStr(char *str)
{
    /*edit*/
    /* Write your code here */
    int length = strlen(str);
    int count = 1;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                printf("%c", str[i]);
            }
            else
            {
                printf("[%d%c]", count, str[i]);
            }
            count = 1;
        }
    }

    /*end_edit*/
}