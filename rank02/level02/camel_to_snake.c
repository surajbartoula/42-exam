#include <unistd.h>

void	camel_to_snake(char c)
{
	int i = 0;
	
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			camel_to_snake(argv[1][i]);
			i++;
		}
	}
	write(1, &"\n", 1);
}