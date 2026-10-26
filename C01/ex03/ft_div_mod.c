/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguccion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:48:43 by mguccion          #+#    #+#             */
/*   Updated: 2026/10/21 09:48:47 by mguccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_value;
	int	mod_value;

	div_value = a / b;
	mod_value = a % b;
	*div = div_value;
	*mod = mod_value;
}
