#include <unistd.h>

void	printword(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 2)
	{
		printword(argv[1]);
	}
	write(1, &"\n", 1);
}
