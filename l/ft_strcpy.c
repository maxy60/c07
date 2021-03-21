char    *ft_strcpy(char *dest, char *src)
{
    int a;
    
    a = 0;
    for (a = 0; src[a]; a++)
    {
        dest[a] = src[a];
    }
    dest[a] = '\0';
    printf("%s\n", src);
    printf("%s\n", dest);
    return(dest);
}

int main()
{
    char *test;
    char *test1 = "salut ca va ?";
    ft_strcpy(test, test1);
}
