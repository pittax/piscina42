/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:15:07 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 03:28:20 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			a = 1;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			a = 1;
		else if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			a = 1;
		else
			a = 0;
		if ('A' <= str[i] && str[i] <= 'Z' && a == 1)
			str[i] = str[i] + 32;
		if ('a' <= str[i] && str[i] <= 'z' && a == 0)
			str[i] = str[i] - 32;
	}	
	return (str);
}
