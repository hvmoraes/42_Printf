/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_escape.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:32:05 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/18 11:34:26 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putescapes(const char *text, int pos)
{
	if (text[pos] == 92 && text[pos + 1] == 97)
		write (1, "\a", 1);
	else if (text[pos] == 92 && text[pos + 1] == 98)
		write (1, "\b", 1);
	else if (text[pos] == 92 && text[pos + 1] == 102)
		write (1, "\f", 1);
	else if (text[pos] == 92 && text[pos + 1] == 110)
		write (1, "\n", 1);
	else if (text[pos] == 92 && text[pos + 1] == 114)
		write (1, "\r", 1);
	else if (text[pos] == 92 && text[pos + 1] == 116)
		write (1, "\t", 1);
	else if (text[pos] == 92 && text[pos + 1] == 118)
		write (1, "\v", 1);
	else if (text[pos] == 92 && text[pos + 1] == 39)
		write (1, "\'", 1);
	else if (text[pos] == 92)
		write (1, "\\", 1);
	return (pos);
}