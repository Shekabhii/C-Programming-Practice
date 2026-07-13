#include <stdio.h>

int main()
{
  int arr[100];
  int i,n,j,temp;

  printf("Enter the number :");
  scanf ("%d", &n);
  printf("Enter the elements :\n");

  for (i=0; i < n;  i++)
  {
    scanf("%d", &arr[i]);
    printf("numbers are %d\n", arr[i]);
  }

  for (i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
    {
        if (arr[i] >arr[j])
        {
            temp = arr[j];
            arr[j]= arr[i];
            arr[i]= temp;
        }
    }
  }

  printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


  return 0;
}
