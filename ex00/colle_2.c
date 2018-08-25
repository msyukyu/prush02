/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:41:06 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/25 18:16:40 by dabeloos         ###   ########.fr       */
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
	else
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
	}
	return (solutions);
}

void	ft_select_rush(int x, int y, char *input)
{
	char	*str;

	str = malloc(((x + 1) * y) * sizeof(char));
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
	free(input);
}

int		main()
{
	ft_solution(NULL);
}
