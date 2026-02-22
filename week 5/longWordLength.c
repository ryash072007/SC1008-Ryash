/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    /*edit*/
    /* Write your code here */
    int max_length = 0;
    int length = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            length++;
        }
        else
        {
            if (length > max_length)
            {
                max_length = length;
            }
            length = 0;
        }
    }

    if (length > max_length)
    {
        max_length = length;
    }

    return max_length;

    /*end_edit*/
}