#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Write a beautiful code that passes the Betty checks
 * Return: 0 or 1
 */
int main(void)
{
	char ssproj[] = "Hello, Simple Shell!!\n";
	int leng = sizeof(ssproj) - 1;
	int bytes_w = write(STDOUT_FILENO, ssproj, leng);

	if (bytes_w != leng)
	{
		return (1);
	}

	return (0);
}
