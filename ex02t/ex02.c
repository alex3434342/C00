#include <unistd.h>

int	main(void)
{
	int c;

	c=97;
	while(c<123)
	{
		write(1,&c,1);
		c++;
	}

	c=90;
	while(c>64)
	{
		write(1,&c,1);
		c--;
	}
	return 0;
}

