#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, count;
    int alreadyCounted;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        alreadyCounted = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                alreadyCounted = 1;
                break;
            }
        }

        if(alreadyCounted)
        {
            continue;
        }

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("%d --> %d times\n", arr[i], count);
    }

    return 0;
}