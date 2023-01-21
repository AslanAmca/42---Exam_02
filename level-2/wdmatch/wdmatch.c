#include <unistd.h>

void ft_print_char(char chr)
{
	write(1, &chr, 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0, found_char = 0;

		// 2. string içinde sırayla 1. string'i ara
		while (argv[2][i] != '\0')
		{
			if (argv[2][i] == argv[1][found_char])
				found_char++;
			i++;
		}

		// eğer 1. string'in hepsini bulduysan ekrana yazdır.
		if (argv[1][found_char] == '\0')
		{
			int i = 0;
			while (argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
