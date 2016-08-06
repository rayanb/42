1 warning generated.
#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_numbers()
{
    int i=0;
    while (i<=9){
       ft_putchar(i);
       ++z;
    }
}

int     main()
{
    void ft_print_numbers(void);
}
