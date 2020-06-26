#include <unistd.h>

void
ft_putstr(char *s)
{
	for (; *s; s++)
		write(STDOUT_FILENO, s, 1);
}
