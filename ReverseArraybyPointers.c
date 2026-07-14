#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *start = arr;
    int *end = arr + n - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Print the reversed array using pointers
    int *p = arr;
    while (p < arr + n) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}