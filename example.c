#include <stdio.h>
#include <stdlib.h>

main()
{
	int MB=0;
	while(malloc(1<<20))	++MB;
	printf("Allocated %d MB total\n", MB);
}
