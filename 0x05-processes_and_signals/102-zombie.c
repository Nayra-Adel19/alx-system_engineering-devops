#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * infinite_while -> C program that creates five zombie processes
 *Return: Always zeroo
 */

int infinite_while(void)
{
	while (1)
	{

		sleep(1);

	}

	return (0);
}

/**
 * main -> Void
 *Return: Always zreoo
 */

int main(void)
{
	int bz;
	pid_t zombie;

	for (bz = 0; bz < 5; bz++)
	{

		zombie = fork();

		if (!zombie)
		{
			return (0);
		}
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infinite_while();
	return (0);
}
