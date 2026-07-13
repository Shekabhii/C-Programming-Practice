#include <stdio.h>

int main()
{
    int arr[100];
    int i,n,j;
    int pos=1;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i=1;i<n;i++)
    {
       if (arr[i]!=arr[i-1])
       {
          arr[pos]=arr[i];
          pos++;
       }
       
    }
     for(i=0;i<pos;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}