#include <stdio.h>

int main()
{
    int arr[100];
    int i,n,k;
    int pos = 0;
    int res[100];

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the kth element\n");
    scanf("%d", &k);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    k = k%n;

    for (i=k;i<n;i++)
    {
        res[pos] = arr[i];
        pos++;
    }
    for(i=0;i<k;i++)
    {
        res[pos] = arr[i];
        pos++;
    }

    for (i=0;i<n;i++)
    {
        printf("%d ", res[i]);
    }
return 0;
}

