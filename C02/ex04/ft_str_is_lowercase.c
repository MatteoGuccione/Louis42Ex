/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:35:21 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/12 16:35:23 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
// 	int result;
// 	char res;

// 	result = ft_str_is_lowercase("aaa");
// 	res = result + '0';
// 	write(1, &res, 1);
// 	return (2);
// }
