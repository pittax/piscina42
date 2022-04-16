char	*ft_rev_print(char *str)
{
	int		l;
	int		i;
	char	temp;

	l = 0;
	i = 0;
	while (str[l] != '\0')
	   l++;

	while (i < (l/2))
	{
		temp = str[i];
		str[i] = str[(l) -i];
		str[(l) -i] = temp;
		i++;
	}	
	return (str);
}
