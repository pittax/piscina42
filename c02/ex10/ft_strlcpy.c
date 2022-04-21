/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:29:57 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/20 17:28:37 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size1;

	i = 0;
	size1 = 0;
	while (src[size1])
	{
		size1++;
	}
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
		dest[i] = src[i];
		i++;
		}
	dest[i] = 0;
	}
	return (size1);
}
