/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_var.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:30:33 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 15:17:56 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putvar(va_list ap, const char *text, int i, t_data *data)
{
	if (text[i] == 37 && text[i + 1] == '%')
		ft_putchar('%');
	else if (text[i] == 37 && text[i + 1] == 'c')
		ft_putchar((char)va_arg(ap, int));
	else if (text[i] == 37 && (text[i + 1] == 'd' || text[i + 1] == 'i'))
		ft_putnbr((long int)va_arg(ap, int), data);
	else if (text[i] == 37 && text[i + 1] == 's')
		data->count += ft_putstr(va_arg(ap, char *));
	else if (text[i] == 37 && text[i + 1] == 'u')
		ft_putnnbr(va_arg(ap, unsigned int), data);
	else if (text[i] == 37 && text[i + 1] == 'x')
		ft_hexnbr((int)va_arg(ap, int), 'x', data);
	else if (text[i] == 37 && text[i + 1] == 'X')
		ft_hexnbr((int)va_arg(ap, int), 'X', data);
	else if (text[i] == 37 && text[i + 1] == 'p')
		ft_putaddr(va_arg(ap, unsigned long), data);
	return (i + 1);
}
