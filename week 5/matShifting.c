/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#define M 10
void matShifting(int a[M][M], int b[M][M], int n);
int main()
{
    int a[M][M], b[M][M];
    int n, i, j;

    printf("Enter array (nxn) size (n<=10): \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter row %d: \n", i);
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    matShifting(a, b, n);
    printf("Array b: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}
void matShifting(int a[M][M], int b[M][M], int n)
{
    /*edit*/
    /* Write your code here */
    for (int idx = n - 1; idx > 0; idx--)
    {
        for (int row_idx = 0; row_idx < n; row_idx++)
        {
            int c1 = idx - 1;
            int c2 = idx;
            int temp = a[row_idx][c1];
            a[row_idx][c1] = a[row_idx][c2];
            b[row_idx][c1] = a[row_idx][c2];
            a[row_idx][c2] = temp;
            b[row_idx][c2] = temp;
        }

        /*end_edit*/
    }
}