#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	int i = 0;
	while (i <= 7)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
}
