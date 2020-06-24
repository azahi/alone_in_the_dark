#include <unistd.h>

void ft_print_numbers();

int
main()
{
	ft_print_numbers();
	write(STDOUT_FILENO, "\n", 1);
}
