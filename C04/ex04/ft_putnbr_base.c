#include <unistd.h>

void	ft_putnbr_base(long nbr, char *base);

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

void	ft_print_base(long nbr, char *base, int len)
{
	char	c;

	if (nbr >= len)
		ft_print_base(nbr / len, base, len);
	c = base[nbr % len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base) //Main function
{
	long	nb;
	int		len;

	if (!ft_check_base(base))
		return ;
	nb = nbr;
	len = 0;
	while (base[len])
		len++;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_print_base(nb, base, len);
}
