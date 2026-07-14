#include <stdio.h>

int main() 
{
    int arr[] = {12, 45, 7, 89, 34, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *p = arr;
    int largest, secondLargest;
    
    if (*p > *(p + 1)) {
        largest = *p;
        secondLargest = *(p + 1);
    } else {
        largest = *(p + 1);
        secondLargest = *p;
    }

    p += 2;


    while (p < arr + n) {
        if (*p > largest) {
            secondLargest = largest;
            largest = *p;
        } else if (*p > secondLargest && *p != largest) {
            secondLargest = *p;
        }
        p++;
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", secondLargest);

    return 0;
}
