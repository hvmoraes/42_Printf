/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:21:38 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/18 15:46:51 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	abs_value(long int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	else
		return (nbr);
}

int	len(long int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		++len;
	while (len > 0)
	{
		++len;
		len /= 10;
	}
	return (len);
}

char	*ft_itoa(long int nbr)
{
	
}
