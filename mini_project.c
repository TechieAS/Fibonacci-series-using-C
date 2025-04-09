#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n = 5;
    printf("fibonacci %d", fibonacci(n));
    return 0;
}