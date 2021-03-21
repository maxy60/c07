#include <unistd.h>

int main(int argc, char **argv)
{
    int a;
    char b;

    a = 0;
    b = '\n';
    if (argc > 2)
    {
        write(1, &b, 1);
        return(1);
    }
    while (argv[1][a] != '\0')
    {
        write(1, &argv[1][a], 1);
        a++;
    }
    write(1, &b, 1);
}
