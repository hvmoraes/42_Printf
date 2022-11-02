/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:25:06 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/02 16:08:53 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolower(char *hex_nbr)
{
	int	i;

	i = 0;
	if (!hex_nbr)
		return (NULL);
	while (hex_nbr[i])
	{
		if (hex_nbr[i] > 64 && hex_nbr[i] < 91)
			hex_nbr[i] += 32;
		i++;
	}
	return (hex_nbr);
}
