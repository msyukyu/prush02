/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:20:34 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/25 17:01:24 by gquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*write_line(char *str, int l, int x, int y)
{
	int c;

	c = 0;
	while (c < x)
	{
		if (c + l == 0 || c + l == x + y - 2)
			str[c] = '/';
		else if ((l == 0 && c == x - 1) || (l == y - 1 && c == 0))
			str[c] = '\\';
		else if (l == 0 || l == y - 1 || c == 0 || c == x - 1)
			str[c] = '*';
		else
			str[c] = ' ';
		c++;
	}
	return (str);
}

char	*rush(int x, int y, char *str)
{
	int	l;
	int i;

	if (x <= 0 || y <= 0)
		return ((void*)0);
	l = 0;
	i = 0;
	while (l < y)
	{
		str = write_line(str + i, l, x, y);
		i += x;
		str[i] = '\n';
		i++;
		l++;
	}
	return (str);
}
