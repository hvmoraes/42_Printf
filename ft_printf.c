/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:21:17 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 14:59:08 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	t_data	data;
	va_list	ap;

	i = 0;
	data.count = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == 92)
			ft_putescape(format, i);
		else if (format[i] == 37)
		{
			i = ft_putvar(ap, format, i, &data);
		}
		else
			write(1, &format[i], 1);
		i++;
		data.count++;
	}
	va_end(ap);
	return (data.count);
}
