/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>
char *sweepSpace(char *str);
int main()
{
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("sweepSpace(): %s\n", sweepSpace(str));
    return 0;
}
char *sweepSpace(char *str)
{
    /*edit*/
    /* Write your code here */
    int read = 0, write = 0;
    while (str[read] != '\0')
    {
        if (str[read] != ' ')
        {
            str[write++] = str[read];
        }
        read++;
    }
    str[write] = '\0';

    return str;
    /*end_edit*/
}