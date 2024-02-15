/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdonmez <zdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:48:16 by zdonmez           #+#    #+#             */
/*   Updated: 2024/02/13 18:49:09 by zdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*repo;

	if (min >= max)
		return (0);
	range = max - min;
	repo = malloc(range * sizeof(int));
	if (!repo)
		return (0);
	index = 0;
	while (index < range)
	{
		repo[index] = min + index;
		index++;
	}
	return (repo);
}
