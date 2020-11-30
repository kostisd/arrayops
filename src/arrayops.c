/* Copyright (c) 2020 Kostis Dimos

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */
#include "../src/arrayops.h"

int arraySum(int arr[], int arr_len)
{
   int i, sum=0;
   for (i=0; i<arr_len; i++)
   {
	    sum = sum + arr[i];
   }
   return(sum);
}

double arrayMean(int arr[], int arr_len)
{
   int i, sum=0;
   for (i=0; i<arr_len; i++)
   {
	    sum = sum + arr[i];
   }
   return (((double) sum / (double) arr_len));
}

int arrayMax(int arr[], int arr_len)
{
   int i;
   int max = arr[0];
   for (i=1; i<arr_len; i++)
   {
     if (arr[i] > max)
        max = arr[i];
   }
   return max;
}

int arrayMin(int arr[], int arr_len)
{
   int i;
   int min = arr[0];
   for (i=1; i<arr_len; i++)
   {
     if (arr[i] < min)
        min = arr[i];
   }
   return min;
}

void arrayPrint(int arr[], int arr_len)
{
   int i;
   for(i=0; i<arr_len; i++)
   {
	    printf("%d ", arr[i]);
   }
   printf("\n");
}
