/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:13:49 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/25 18:19:18 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_2_H
# define COLLE_2_H
# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_putnbr(char *str);
char			*rush00(int x, int y, char *str);
char			*rush01(int x, int y, char *str);
char			*rush02(int x, int y, char *str);
char			*rush03(int x, int y, char *str);
char			*rush04(int x, int y, char *str);
typedef struct	s_input
{
	int			x;
	int			y;
	char		*input;
}				t_input;
#endif
