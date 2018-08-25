/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:41:06 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/25 19:22:34 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

char	**ft_solution(char *solution)
{
	static char **solutions;
	int			i;
	int			j;
	int			length;

	if (solution == NULL)
	{
		solutions = malloc(sizeof(char*) * 6);
		solutions[0] = NULL;
	}
	else if (solution[0] != '\0')
	{
		i = 0;
		while (solutions[i] != NULL)
			i++;
		length = ft_strlen(solution);
		solutions[i] = malloc(sizeof(char) * (ft_strlen(solution) + 1));
		j = -1;
		while (++j < length)
			solutions[i][j] = solution[j];
		solutions[i][j] = '\0';
		solutions[i + 1] = NULL;
	}
	return (solutions);
}

void	ft_select_rush(int x, int y, char *input)
{
	char	*str;

	str = malloc(((x + 1) * y + 1) * sizeof(char));
	str = rush00(x, y, str);
	if (ft_strcmp(str, input) == 0)
		ft_solution("rush-00");
	str = rush01(x, y, str);
	if (ft_strcmp(str, input) == 0)
		ft_solution("rush-01");
	str = rush02(x, y, str);
	if (ft_strcmp(str, input) == 0)
		ft_solution("rush-02");
	str = rush03(x, y, str);
	if (ft_strcmp(str, input) == 0)
		ft_solution("rush-03");
	str = rush04(x, y, str);
	if (ft_strcmp(str, input) == 0)
		ft_solution("rush-04");
	free(str);
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
	while (read(0, &c, 1) != 0)
	{
		input = ft_appendchar(input, c);
		if (c == '\n')
			y++;
		if (y == 0)
			x++;
	}
	sized_input.x = x;
	sized_input.y = y;
	sized_input.input = input;
	return (sized_input);
}

int		main(void)
{
	t_input	input;
	char	**solutions;
	int		i;

	ft_solution(NULL);
	input = ft_read_input();
	ft_select_rush(input.x, input.y, input.input);
	solutions = ft_solution("\0");
	i = -1;
	while (solutions[++i] != NULL)
		ft_putstr(solutions[i]);
	if (solutions[0] == NULL)
		ft_putstr("FAKE");
	return (0);
}
