#include <unistd.h>

int
isspace(int c)
{
	return (c == ' ' || (unsigned)c - '\t' < 5);
}

int
main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *c = argv[1];
		for (; isspace(*c); c++);
		for (; *c && !isspace(*c); c++)
			write(STDOUT_FILENO, c, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
