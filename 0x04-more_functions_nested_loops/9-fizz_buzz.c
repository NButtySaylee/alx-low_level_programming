#include < stdio.h >
/**
 *main - prints numbers from 1-100.
 *if number is multiple of 3 it prints Fizz.
 *if number is multiple of 5 it prints Buzz.
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			if (i < p)
				printf("Buzz ");

			else
				printf("Buzz ");
		}

		else
		{
			printf("%i ", i);
		}

		i++;


	}
	printf("\n");
	return (0);
}
