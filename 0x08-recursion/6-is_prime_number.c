#include "main.h"
int real_prime_number(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return(real_prime_number(n, n - 1));
}
int real_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
	       return (0);
        return (real_prime_number(n, i - 1));

