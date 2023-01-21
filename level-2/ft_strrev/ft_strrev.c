char *ft_strrev(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;

	int i = 0;
	int last_index = len - 1;
	while (i < last_index)
	{
		char temp = str[i];
		str[i] = str[last_index];
		str[len] = temp;

		i++;
		len--;
	}
	return str;
}
