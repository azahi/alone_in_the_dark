#include <unistd.h>

int
main()
{
	write(STDOUT_FILENO, "a", 1);
}
