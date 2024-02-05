#include "do_op.h"

void	do_op(int x, int y, char c)
{
	int	ops;
	if (c == '+')
		ops = x + y;
	else if (c == '-')
		ops = x - y;
	else if (c == '*')
		ops = x * y;
	else if (c == '/')
		ops = x / y;
	else if (c == '%')
		ops = x % y;
	else
		return ;
	printf("%d", ops);
}

int main(int argc, char *argv[])
{
	int	x;
	int	y;
	if (argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		do_op(x, y, argv[2][0]);
	}
	printf("\n");
}