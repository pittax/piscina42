/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:15:07 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 17:16:25 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*minus(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	minus(str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = i;
		while ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
				i++;
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] -= 32;
		i++;
	}
	return (str);
}

char	*minus(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
				str[i] += 32;
		i++;
	}
	return (str);
}
