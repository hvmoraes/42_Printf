/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:13:59 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/18 11:38:22 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


# include "Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


typedef struct s_data
{
	int	count;
}		t_data;


int		ft_printf(const char *format, ...);
int		ft_escape(const char *text, int loc);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putunnbr(int n, t_data *data);
void	ft_putnbr(long int num, t_data *data);
int		ft_putvar(va_list ap, const char *text, int i, t_data *data);
void	ft_hexnbr(unsigned long num, char up_down, t_data *data);
void	ft_putaddr(unsigned long addr, t_data *data);
char	*to_lower(char *hex_num);


#endif