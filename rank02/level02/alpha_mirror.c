#include <unistd.h>

void	alpha_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 219 - c;
		write(1, &c, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = 155 - c;
		write(1, &c, 1);
	}
	else
		write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			alpha_mirror(argv[1][i]);
			i++;
		}
	}
	write(1, &"\n", 1);
}