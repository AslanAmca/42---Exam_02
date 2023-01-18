#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len = 0;
	while (src[len] != '\0')
		len++;

	char *new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return NULL;

	int i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return new_str;
}
