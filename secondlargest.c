#include <stdio.h>

int main()
{
    int arr[100];
    int i,n;

    int largest=-1,secondlargest=-1;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }

    printf("Second largest in the array is : %d", secondlargest);
    return 0;
}