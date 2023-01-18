#include <unistd.h>

int main(void)
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i >= 10)
		{
			char onlar = i / 10 + '0';
			char birler = i % 10 + '0';

			write(1, &onlar, 1);
			write(1, &birler, 1);
		}
		else
		{
			char rakam = i + '0';

			write(1, &rakam, 1);
		}
		write(1, "\n", 1);
		i++;
	}

}
