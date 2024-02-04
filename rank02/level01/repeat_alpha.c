#include <unistd.h>

void	repeat_alpha(char c)
{
	if (c >= 65 && c <= 90)
	{
		int i = 0;
		int lower = c - 65;
		while (i <= lower)
		{
			write(1, &c, 1);
			i++;
		}
	}
	else if (c >= 97 && c <= 122)
	{
		int j = 0;
		int upper = c - 97;
		while (j <= upper)
		{
			write(1, &c, 1);
			j++;
		}
	}
	else
		write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, &"\n", 1);
}