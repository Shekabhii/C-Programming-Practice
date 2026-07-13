#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int i,j,n;

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);

    }
    int largest=INT_MIN,secondlargest=INT_MIN,third=INT_MIN;
    
    for(i=0;i<n;i++)
    {
        if (arr[i] > largest)
        {
            third = secondlargest;
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i]<largest)
        {
            third = secondlargest;
            secondlargest = arr[i];
        }
        else if (arr[i]>third&&arr[i]<secondlargest)
        {
            third = arr[i];
        }
    }
    
    if (third == INT_MIN)
    {
        printf("There is no third element to found");
    }
    else
    {
    printf("the third largest number is %d", third);
    }

    return 0;
}