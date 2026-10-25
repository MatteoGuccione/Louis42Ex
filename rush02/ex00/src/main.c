/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loguicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:26:52 by loguicha          #+#    #+#             */
/*   Updated: 2026/10/25 15:20:26 by loguicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	***dict;
	char	***reference;

	if (argc < 2 || argc > 3)
		return (1);
	if (argc == 2)
	{
		dict = ft_load_dict("./numbers.dict");
		if (!dict)
			return (write(2, "Dict Error\n", 11), 1);
		ft_read_from_left(argv[1], dict);
	}
	else
	{
		reference = ft_load_dict("./numbers.dict");
		dict = ft_load_dict(argv[1]);
		if (!reference || !dict
			|| !ft_check_required_keys(reference, dict))
			return (write(2, "Dict Error\n", 11), 1);
		ft_read_from_left(argv[2], dict);
	}
	return (0);
}
