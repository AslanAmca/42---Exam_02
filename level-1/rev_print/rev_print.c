#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int len = 0;

		while(argv[1][len] != '\0')
			len++;

		for(int i = len - 1; i >= 0; i--)
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return 0;
}