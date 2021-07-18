#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main(void)
{
    int arr[3] = {1, 1, 2};
    int n;
    int size = 3;

    printf("[");
    while (n < size)
    {
        printf("%d ", arr[n]);
        n++;
    }
    printf("]\n[");
    size = removeDuplicates(arr, size);
    n = 0;
    while (n < size)
    {
        printf("%d ", arr[n]);
        n++;
    }
    printf("]");
}