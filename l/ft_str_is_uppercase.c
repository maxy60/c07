int ft_str_is_uppercase(char *str)
{
    int a;

    a = 0;
    while (str[a] != '\0')
    {
        if (str[a] < 65 || str[a] > 90)
        return ;
     a++;
    }
    return(1);
}
