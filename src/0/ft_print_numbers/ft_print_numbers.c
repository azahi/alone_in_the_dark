#include <unistd.h>

void
ft_print_numbers(void)
{
	write(STDOUT_FILENO, "0123456789", 10);
}
