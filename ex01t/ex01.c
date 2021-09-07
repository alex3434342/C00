#include <unistd.h>

int	main()
{
	int c;

	c=48;
	while (c<58)
	{
		write(1,&c,1);
		c++;
	}
	return 0;
}                            
