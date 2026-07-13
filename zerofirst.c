#include <stdio.h>

int main()
{
    int arr[100];
    int i,n;

    printf("Enter the size\n");
    scanf("%d", &n);

    int pos = n-1;

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=n-1;i>=0;i--)
    {
        if(arr[i] != 0)                    //(arr[i] > 0 || arr[i] < 0)
        {
            arr[pos] = arr[i];
            pos--;
        }
    }

    for (i=0;i<=pos;i++)
    {
          arr[i] = 0;          // arr[pos] = 0;
                               // pos++;
    }
   for(i=0;i<n;i++)
   {
    printf("%d ", arr[i]);
   }

    return 0;
}