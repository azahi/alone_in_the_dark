#include <unistd.h>

void ft_putstr(char *);

int
main(int argc, char *argv[])
{
	if (argc >= 2)
		ft_putstr(argv[1]);
	write(STDOUT_FILENO, "\n", 1);
}
