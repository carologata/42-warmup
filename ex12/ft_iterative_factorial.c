/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:03:43 by cogata            #+#    #+#             */
/*   Updated: 2023/07/11 17:03:45 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
	return (0);
}
