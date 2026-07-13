#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, count;
    int f[100];

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        f[i] = -1;
    }

    for(i = 0; i < n; i++)
    {
        count = 1;
        for (j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                f[j] = 0;
            } 
        }
        
      if (f[i]!=0)
        {
            f[i] = count;
        }

    }

    for (i=0;i<n;i++)
       {
        if (f[i] != 0)
        {
            printf("%d occurs %dtimes\n", arr[i],f[i]);
        }
    }
return 0;
}

       