#include <stdio.h>

int main()
{
    int arr[100];
    int i,n,k,j;
    int pos;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the kth element\n");
    scanf("%d", &k);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

for (i = 0;i < k;i++) 
{
    pos = arr[0];

    for (j= 0; j < n - 1;j++)      
    {
        arr[j] = arr[j + 1];
    }

    arr[n - 1] = pos;
}

for (i=0;i<n;i++)
{
    printf("%d ", arr[i]);
}
    
    return 0;
}