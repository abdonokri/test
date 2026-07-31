#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter your number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("The sum from 1 to %d is %d\n", n, sum);

    return 0;
}