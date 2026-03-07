#include <unistd.h>


void ft_putstr_recursive(char* str)
{
    if(*str == '\0')
        return;

    ft_putstr_recursive(str + 1);

    write(1, str, 1);
}

int main()
{
    char* message = "Hello, Low Lewel Word!\n";

    ft_putstr_recursive(message);
    return (0);
}
