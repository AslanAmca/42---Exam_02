#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	// s içerisinde ki karakterler, reject içerisinde var mı diye bakıyor.
	// bir tane bulduğu an kaçıncı indekste olduğunu dönüyor.
	int i = 0;
	while (s[i] != '\0')
	{
		int j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}

	// eğer hiçbir karakter yoksa
	int len = 0;
	while (s[len] != '\0')
		len++;

	return len;
}
