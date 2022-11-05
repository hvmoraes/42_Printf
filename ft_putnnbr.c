/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:30:03 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 14:59:23 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unputnbr(long int unnum, t_data *data)
{
	char	*num_string;

	num_string = ft_itoa_base(unnum, 10);
	data->count += ft_strlen(num_string) - 1;
	ft_putstr(num_string);
	free(num_string);
	return ;
}

void	ft_putunnumbers(int n, t_data *data)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = (unsigned int)(n * -1);
		nbr = 4294967296 - nbr;
	}
	else
		nbr = (unsigned int)n;
	ft_unputnbr(nbr, data);
	return ;
}
