#include <unistd.h>
#include <stdio.h>

void ft_strcat(char *dest, char *src)
{
	int dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	int src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}
	dest[dest_len] = '\0';
}

int ft_strchr_index(char *string, int index, char character)
{
	int i = 0;

	while (i < index)
	{
		if (string[i] == character)
			return 1;
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		// stringleri birleştirip tek bir string haline getirmeliyiz.
		ft_strcat(argv[1], argv[2]);

		int i = 0;
		while (argv[1][i] != '\0')
		{
			// Mevcut karakter, kendisinden önce gelen karakterler arasında yoksa yaz.
			if (ft_strchr_index(argv[1], i, argv[1][i]) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return 0;
}
