#include <stdio.h>

int main()
{
    int number,i;
    int sum1= 0,sum2 = 1;

    printf("Enter the number : \n");
    scanf("%d", &number);

    for (i=0;i<=number;i++)
    {
        printf("%d ",sum1);

        sum2 = sum1 + sum2;
        sum1 = sum2 - sum1;
    }

    return 0;
}