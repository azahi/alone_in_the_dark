#include <unistd.h>

int
main()
{
	write(STDOUT_FILENO, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}
