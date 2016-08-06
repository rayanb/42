#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	ft_print_alphabet()
{
    char c='a';
    while (c<='z'){
       ft_putchar(c);
       ++z;
    }
} 

int	main()
{
    void ft_print_alphabet(void);
}

