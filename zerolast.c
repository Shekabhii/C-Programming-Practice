#include <stdio.h>

int main()
{
    int arr[100];
    int i,n;
    int pos = 0;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n;i++)
    {
        if(arr[i] != 0)                    //(arr[i] > 0 || arr[i] < 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    for (i=pos;i<=n;i++)
    {
        arr[pos] = 0; //arr[i] = 0;
        pos++;
    }
   for(i=0;i<n;i++)
   {
    printf("%d ", arr[i]);
   }

    return 0;
}