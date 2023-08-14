#include <stdio.h>
#define ABS(x) if (x >= 0) \
	printf(%d, x); \
	else \
	printf(%d, -1 * x);
