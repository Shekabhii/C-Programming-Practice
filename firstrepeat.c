#include <stdio.h>

int main()
{
    int arr[100];
    int i,n,j,repeat;
    int found = 0;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i] == arr[j])
            {
                repeat = arr[i];
                found =  1;
                break;
                
            }
        }
        if (found)
        {
            printf("The first repeat number is : %d", repeat);
            break;
        }
    }
    if (!found)
    {
        printf("No number is repeatative");
    }

    return 0;
}