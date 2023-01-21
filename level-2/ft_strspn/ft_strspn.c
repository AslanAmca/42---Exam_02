// s string'inde ki karakterlerin accept içerisinde olup olmadığına bakar.
// Dikkat edilmesi gereken nokta, s stringi içindeki karakterlerin sırayla bakılmasıdır.
// kendinden önce ki karakter accept içinde yoksa kendinden sonra gelenlerin olmasının bir anlamı yoktur.

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *)s;
		s++;
	}
	return 0;
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return i;
}
