	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main() 
{
   int ar[50],i,size;
   
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++) 
      scanf("%d",ar+i);
   swapMinMax1D(ar, size);
   printf("swapMinMax1D(): ");
   for (i=0; i<size; i++) 
      printf("%d ",*(ar+i)); 
   return 0;
}
void swapMinMax1D(int ar[], int size)
{
	/*edit*/
  /* Write your code here */
    int max_idx = 0;
    int min_idx = 0;

    for (int idx = 0; idx < size; idx++)
    {
        if (ar[idx] >= ar[max_idx])
        {
            max_idx = idx;
        }
        if (ar[idx] <= ar[min_idx])
        {
            min_idx = idx;
        }
    }

    int temp = ar[max_idx];
    ar[max_idx] = ar[min_idx];
    ar[min_idx] = temp;

	/*end_edit*/
}