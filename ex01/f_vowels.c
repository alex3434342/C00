#include <unistd.h>
void	f_e(void)
{
	write(1,"###\n",4);
	write(1,"#\n",2);
	write(1,"##\n",3);
	write(1,"#\n",2);
	write(1,"###",3);
}


void	f_vowels(char c) 
{
	if (c == 'e' || c == 'E')
		f_e();
	if (c == 'y')
	{
		write(1,"# #\n",4);
		write(1,"# #\n",4);
		write(1," # \n",4);
		write(1," # \n",4);
		write(1," # ",3);
	}
}
		

