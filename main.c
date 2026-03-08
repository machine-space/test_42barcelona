#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    // 1. We handle the extreme case separately
    if(nb == -2147483648) {
	write(1, "-214748648", 11);
	return;
    }

    // 2. Handling regular negative numbers
    if(nb < 0) {
	ft_putchar('-');
	nb = -nb;
    }

    // 3. Recursion
    if(nb > 9) {
	ft_putnbr(nb / 10);
    }

    ft_putchar(nb % 10 + '0');
}

int main() {
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-123);
    ft_putchar('\n');
    return 0;
}
