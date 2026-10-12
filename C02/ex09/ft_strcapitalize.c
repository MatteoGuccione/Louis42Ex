/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:41:42 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/12 16:41:45 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (i != 0 && str[i - 1] == ' ' && (str[i] > 'a' && str[i] < 'z'))
		{
			c = str[i] - 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[] = "3iao the world Io";
// 	ft_strcapitalize(str);
//	write(1,str,i);
// }
