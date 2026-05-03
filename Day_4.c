/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays*/
#include <stdio.h>
void main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = size - 1;
    for (int i = 0; i <= size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[count];
        arr[count] = temp;
        count -= 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
