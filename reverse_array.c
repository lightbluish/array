// C Program to Reverse an Array by Printing it from The Last Element to the First Element

#include <stdio.h>
#define N 1000

int main()
{
    int arr[N];

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter an array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing the reverse of the array
    printf("Reversed array elements: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
