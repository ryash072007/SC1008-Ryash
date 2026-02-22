/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#define M 80
int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2);
int main()
{
    int a[M], b[M], c[M], i, k = 0, n1, n2;

    printf("Enter the size of array a: \n");
    scanf("%d", &n1);
    printf("Enter the size of array b: \n");
    scanf("%d", &n2);
    printf("Enter array a[%d]: \n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter array b[%d]: \n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    k = mergeArrays(a, b, c, n1, n2);
    printf("mergeArrays(): \n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}
int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2)
{
    /*edit*/
    /* Write code here */

    int a_idx = 0;
    int b_idx = 0;
    for (int idx = 0; idx < n1 + n2; idx++)
    {
        if (a_idx >= n1)
        {
            c[idx] = b[b_idx];
            b_idx++;
            continue;
        }

        if (b_idx >= n2)
        {
            c[idx] = a[a_idx];
            a_idx++;
            continue;
        }

        if (a[a_idx] < b[b_idx])
        {
            c[idx] = a[a_idx];
            a_idx++;
        }
        else {
            c[idx] = b[b_idx];
            b_idx++;
        }
    }

    /*end_edit*/
}