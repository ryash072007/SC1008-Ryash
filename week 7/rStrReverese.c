/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>
void rStrReverse1(char *s);
int main()
{
    char str[40], *p;

    printf("Enter a string: \n");
    fgets(str, 40, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    rStrReverse1(str);
    printf("rStrReverse1(): %s", str);
    return 0;
}
void rStrReverse1(char *s)
{
    /*edit*/
    /* Write your code here */
    

    /*end_edit*/
}