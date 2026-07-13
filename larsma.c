#include <stdio.h>

int main()
{
    int arr[100];
    int i,n,j;
    int largest;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    for (i=0;i<n;i++)
    {
       if (arr[i] > largest)
       {
           largest = arr[i];
       }
       
    }
   printf("The largest number in the array is %d", largest);
    return 0;
}