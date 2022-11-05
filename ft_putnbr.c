/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:21:38 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 14:59:19 by hcorrea-         ###   ########.fr       */
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

int	get_len(long int nbr)
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
	char	*result;
	int		len;

	len = get_len(nbr);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		--len;
		result[len] = abs_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}

void	ft_putnbr(long int num, t_data *data)
{
	char	*num_string;

	num_string = ft_itoa(num);
	data->count += ft_strlen(num_string) - 1;
	ft_putstr(num_string);
	free(num_string);
	return ;
}
