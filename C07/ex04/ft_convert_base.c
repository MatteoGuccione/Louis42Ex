int	get_base_len(char *base);

int	ft_atoi_base(char *nbr, char *base);

char	*ft_itoa_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	number;

	if (get_base_len(base_from) == 0
		|| get_base_len(base_to) == 0)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(number, base_to));
}
