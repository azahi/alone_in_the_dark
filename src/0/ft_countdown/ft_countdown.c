#include <unistd.h>

int
main()
{
	write(STDOUT_FILENO, "9876543210\n", 11);
}
