#include <stdio.h>
int lcm(int, int);

int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}

int lcm(int a, int b)
{
    static int n = 1;
    if (n % a == 0 && n % b == 0)
    {
        return n;
    }
    n++;
    lcm(a, b);
    return n;
}
