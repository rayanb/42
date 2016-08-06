#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	static int hey[4];
	while (hey[0] < 10)
	{
		while (hey[1] < 10)
		{
			while(hey[2] < 10)
			{
				while(hey[3] < 10)
				{
					if(hey[3]+hey[2] > hey[1]+hey[0])
					{
						ft_putchar('0' + hey[0]);
						ft_putchar('0' + hey[1]);
						ft_putchar(' ');
						ft_putchar('0' + hey[2]);
						ft_putchar('0' + hey[3]);
						ft_putchar(',');
						ft_putchar(' ');
					}
					hey[3]++;	
				}
				hey[2]++;
				hey[3] = 0;
			}
			hey[1]++;
			hey[2] = 0;
		}
		hey[0]++;
		hey[1] = 0;
	}
}


int	main()
{
	ft_print_comb2();
	return (0);
}
