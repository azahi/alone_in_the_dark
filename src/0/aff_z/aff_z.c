#include <unistd.h>

int
main(int argc, char *argv[])
{
	if (argc != 2)
		write(STDOUT_FILENO, "z", 1);
	else
	{
		for (char *c = argv[1]; *c; c++)
		{
			if (*c == 'z')
			{
				write(STDOUT_FILENO, c, 1);
				break;
			}
		}
	}
	write(STDOUT_FILENO, "\n", 1);
}
