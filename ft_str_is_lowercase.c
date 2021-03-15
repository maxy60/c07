int ft_str_is_lowercase(char *str)
{
    int a;

    a = 0;
    while (str[a] < '\0')
    {
        if (str[a] < 97 || str[a] > 122)
        return ;
     a++;
    }
return (1);
}
