/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:28:55 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 14:59:12 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putaddr(unsigned long addr, t_data *data)
{
	char	*addr_string;

	if (addr == 0)
	{
		write (1, "0x0", 3);
		data->count += 2;
		return ;
	}
	addr_string = ft_itoa_base(addr, 16);
	data->count += 1 + ft_strlen(addr_string);
	write (1, "0x", 2);
	addr_string = ft_tolower(addr_string);
	ft_putstr(addr_string);
	free(addr_string);
	return ;
}
