/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:27:33 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 14:59:04 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_hexnumbers(unsigned long num, char up_down, t_data *data)
{
	char	*hex_string;

	hex_string = ft_itoa_base(num, 16);
	if (up_down == 'X')
		hex_string = ft_toupper(hex_string);
	if (up_down == 'x')
		hex_string = ft_tolower(hex_string);
	data->count += ft_strlen(hex_string) - 1;
	ft_putstr(hex_string);
	free(hex_string);
	return ;
}
