void    shift_nums(int* nums, int start, int *size)
{
    int n;

    n = start;
    while (n < *size)
    {
        nums[n - 1] = nums[n];
        n++;
    }
    *size = *size - 1;
}

int removeDuplicates(int* nums, int numsSize){
    int n;

    if (numsSize < 2)
    {
        return (numsSize);
    }
    n = 1;
    while (n < numsSize)
    {
        if (nums[n - 1] == nums[n])
        {
            shift_nums(nums, n, &numsSize);
            n--;
        }
        n++;
    }
    return (numsSize);
}

