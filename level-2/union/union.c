#include <unistd.h>
#include <stdio.h>

int ft_strcat(char *dest, char *src)
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
	return dest_len;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int char_count = ft_strcat(argv[1], argv[2]);
	}
}
