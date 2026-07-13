#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int found = 0;

   int freq[1000] = {0};

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    for(i=0;i<n;i++)
    {
         if (freq[arr[i]] == 1)
         {
            printf("first non repetive number is %d", arr[i]);
            found = 1;
            break;
         }
    
    }

    if (found == 0)
    {
        printf("there is no non repetative number\n");
    }


    return 0;
}

   