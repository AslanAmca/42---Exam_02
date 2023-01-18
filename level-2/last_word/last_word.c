#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = 0;
		while (argv[1][len] != '\0')
			len++;

		// sonda ki boşlukları at.
		int last_index = len - 1;
		while (argv[1][last_index] == ' ')
			last_index--;

		// son kelimenin başlangıcını bul;
		int first_character_index = last_index;
		while (argv[1][first_character_index] != '\0' && argv[1][first_character_index] != ' ')
			first_character_index--;

		// boşluğu bastırmayacağımız için +1 index lazım.
		first_character_index = first_character_index + 1;

		while (first_character_index <= last_index)
		{
			write(1, &argv[1][first_character_index], 1);
			first_character_index++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
