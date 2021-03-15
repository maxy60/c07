int ft_str_is_printable.c
{
    int a;

    a = 0;
    while (str[a] != '\0')
    {
        if (str[a] < 26)
        return ;

        a++;

    }
    return(1);
}
