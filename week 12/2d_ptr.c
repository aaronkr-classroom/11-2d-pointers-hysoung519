//2d_ptr.c
#include <stdio.h>

int main()
{
	short data = 3,
		* p = &data,
		* *pp = &p;

	printf("[Before ] data: %d\n", data); //3
	*p = 40;
	printf("[Use *p ] data: %d\n", data); //40
	* *pp= 500;
	printf("[Use **p] data: %d\n", data);

	return 0;
}

