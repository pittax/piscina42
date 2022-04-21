/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:32:46 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/21 00:40:40 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	while1(int i, int l, char *str, char *to_find)
{
	int	a;

	a = 0;
	while (str[i + a] == to_find[a])
	{
		if (a == (l - 1))
			return (1);
		else if (a < l)
			a++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int			i;
	int			l;
	char		*ptr;

	i = 0;
	l = 0;
	while (to_find[l])
		l++;
	if (l > 0)
	{
		while (str[i])
		{
			if (str[i] == to_find[0])
			{
				if (while1 (i, l, str, to_find))
					return (ptr = &str[i]);
			}
			i++;
		}
	}
	else
		return (ptr = &str[0]);
	return (0);
}
