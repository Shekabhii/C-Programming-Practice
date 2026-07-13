#include <stdio.h>

int main()
{
    int n,i;
    int way1=1,way2=2;

    printf("Enter the numbers:");
    scanf("%d", &n);

    if(n>=3)
    {
    for(i=3;i<=n;i++)
    {
        way2 = way1 + way2;
        way1 = way2 - way1;
    }
    printf("the way to climb stares is %d", way2);
    }
    else{
        printf("the way to climb stare is %d", n);
    }


}