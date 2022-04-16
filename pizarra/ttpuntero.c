/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ttpuntero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpittalu <gpittalu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:47:25 by gpittalu          #+#    #+#             */
/*   Updated: 2022/04/11 21:16:29 by gpittalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ttprint(char x);

int	main(void)
{
	char	a;
	char	tabla[10];
	char	*p1;
	char	i;

	a = '5';
	p1 = tabla;
	//tabla[10] = {1,2,3,4,5,6,7,8,9,0};
	
	i = 0;
	while (i < 10)
	{
		tabla[i] = i + 1;
		i ++;
	}
	ttprint(*p1);

	return (0);
}
