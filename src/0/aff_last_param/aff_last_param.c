#include <unistd.h>

int
main(int argc, char *argv[])
{
	if (argc >= 2)
		for (char *c = argv[argc - 1]; *c; c++)
			write(STDOUT_FILENO, c, 1);
	write(STDOUT_FILENO, "\n", 1);
}
