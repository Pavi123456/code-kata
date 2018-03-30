
#include<stdio.h>
 void segregateEvenOdd(int arr[], int size)
{
      int L = 0, R = size-1;
    while (L < R)
    {
               while (arr[L]%2 == 0 && L < R)
            L++;
                 while (arr[R]%2 == 1 && L < R)
            R--;
         if (L< R)
        {
                      swap(&arr[L], &arr[R]);
            L++;
            R--;
        }
    }
}
 void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    segregateEvenOdd(arr, arr_size);
 
    printf("Afterchanging positions:");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
     return 0;
}
