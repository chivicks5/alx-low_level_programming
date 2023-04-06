
/**
 * is_prime_number - the function returns 1 if the input integer is
 * a prime number otherwise return 0
 * @n: int
 * Return: 1 or 0
 * chivicks coding
 */

int is_prime_number(int n)

{
	if (n <= 1)

	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)

	{
	if (n % i == 0)


	{
		return (0);
	}
	}
	return (1);
}
