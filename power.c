#include <stdio.h>
int power(int n)
{
    if (n == 0)
        return 1;
    else
        return 2 * power(n - 1);
}
int main()
{
    int n;
    printf("Enter power: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Enter a non-negative number");
    else
        printf("Answer = %d", power(n));
    return 0;
}
