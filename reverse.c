#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[100];
    int i,n;

    printf("Enter the number of array elements:\n");
    scanf("%d", &n);

    printf("Enter the numbners in array: \n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = n-1; i>-1; i--)
    {
        printf("The reversed numbers are : %d\n", arr[i]);
    }

    return 0;
}