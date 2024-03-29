#include <stdio.h>
// Main function
int main()
{
    int arr1[100], arr2[100];
    int i, n;

    printf("\n\nCopy the elements of one array into another array:\n");
    printf("----------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    /* Copy elements of the first array into the second array. */
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i]; // Copy each element from the first array to the second array
    }

    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", arr1[i]);
    }
    printf("\n\nThe elements copied into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", arr2[i]);
    }
    printf("\n\n");
    return 0;
}
