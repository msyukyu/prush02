/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:41:06 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 10:38:22 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

int		ft_test_rush(int x, int y, char *input, char *(*f)(int, int, char*))
{
	char *str;

	str = malloc(((x + 1) * y + 1) * sizeof(char));
	str = f(x, y, str);
	if (str == (void*)0)
	{
		if (input[0] == '\n')
			return (1);
	}
	else if (ft_strcmp(str, input) == 0)
		return (1);
	return (0);
}

void	ft_print_rush(char *str, int x, int y)
{
	ft_putstr(str);
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

int		ft_select_rush(int x, int y, char *input, int var[3])
{
	var[1] = ft_test_rush(x, y, input, &rush00);
	if (var[1] && ++var[0])
		ft_print_rush("[rush-00]", x, y);
	var[2] = ft_test_rush(x, y, input, &rush01);
	if (var[1] && var[2])
		ft_putstr(" || ");
	if (var[2] && ++var[0])
		ft_print_rush("[rush-01]", x, y);
	var[1] = ft_test_rush(x, y, input, &rush02);
	if (var[1] && var[2])
		ft_putstr(" || ");
	if (var[1] && ++var[0])
		ft_print_rush("[rush-02]", x, y);
	var[2] = ft_test_rush(x, y, input, &rush03);
	if (var[1] && var[2])
		ft_putstr(" || ");
	if (var[2] && ++var[0])
		ft_print_rush("[rush-03]", x, y);
	var[1] = ft_test_rush(x, y, input, &rush04);
	if (var[1] && var[2])
		ft_putstr(" || ");
	if (var[1] && ++var[0])
		ft_print_rush("[rush-04]", x, y);
	return (var[0]);
}

char	*ft_appendchar(char *str, char c)
{
	char	*output;
	int		i;
	int		length;

	length = ft_strlen(str);
	output = malloc(sizeof(char) * (length + 2));
	i = -1;
	while (++i < length)
		output[i] = str[i];
	output[i] = c;
	output[i + 1] = '\0';
	free(str);
	return (output);
}

t_input	ft_read_input(void)
{
	char	c;
	int		x;
	int		y;
	char	*input;
	t_input	sized_input;

	input = malloc(sizeof(char));
	input[0] = '\0';
	x = 0;
	y = 0;
	while (read(0, &c, 1) > 0)
	{
		input = ft_appendchar(input, c);
		if (c == '\n')
			y++;
		if (y == 0)
			x++;
	}
	sized_input.x = x;
	sized_input.y = y;
	sized_input.input = malloc(sizeof(char) * (ft_strlen(input) + 1));
	sized_input.input = input;
	return (sized_input);
}

int		main(void)
{
	t_input	input;
	int	var[3];

	input = ft_read_input();
	var[0] = 0;
	if (ft_select_rush(input.x, input.y, input.input, var) == 0)
		ft_putstr("FAKE RUSH\n");
	else
		ft_putchar('\n');
	return (0);
}
