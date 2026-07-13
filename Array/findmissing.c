#include<stdio.h>

int main()
{
     int arr[100];
    int i,n,actualsum,num;
    int sum = 0;

    printf("Enter the size\n");
    scanf("%d", &n);
    actualsum = n*(n+1) / 2;
    printf("Enter the elements of array\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    num = actualsum - sum;

printf("the missing number is : %d", num);

return 0;
}   