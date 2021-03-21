int ft_fibonacci(int index)
{
    int a;
    int b;
    int c;
    int result;

    a = 0;
    b = 1;
    c = 0;
    result;
    if (index == 0)
        return (0);
    while (a < index)
    {
        result = b + c;
        b = c;
        c = result;
        a++;
    }
    return (result);
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_fibonacci(0));
}
