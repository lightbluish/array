#include <stdio.h>

int main()
{
    // let's assume the maximum array size as 100.
    // initialize sum as 0. Otherwise, it will take some garbage value.
    int arr[100], size, i, sum = 0;

    printf("Enter array size\n");
    scanf("%d", &size);

    printf("Enter array elements\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // add all elements to the variable sum.
    for (i = 0; i < size; i++)
        sum = sum + arr[i];

    // print the result
    printf("Sum of the array = %d\n", sum);

    return 0;
}