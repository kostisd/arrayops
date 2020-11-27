#include <stdio.h>
#include "arrayops.h"
//int sum_array(int a[], int num_elements);
//void print_array(int a[], int num_elements);

int main(void)
{
//   int a[10] = {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
   int a[10] = {1, 2, 0, 0, 4, 25, 6, 9, 9, 17};
   int sum;
   int max;
   double mean;

   printf("\nArray:\n");
   arrayPrint(a, 10);

   sum = arraySum(a, 10);
   mean = arrayMean(a, 10);
   max = arrayMax(a, 10);
   printf("The sum is %d\n", sum);
   printf("The mean is %.2lf\n", mean);
   printf("The max is %d\n", max);

   return 0;
}
