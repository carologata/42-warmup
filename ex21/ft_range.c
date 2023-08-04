/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:50:40 by cogata            #+#    #+#             */
/*   Updated: 2023/07/12 14:50:41 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*num;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	num = malloc(range * sizeof(int));
	i = 0;
	while (i < range)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
