#include<unistd.h>
int main(int ac, char **str)
{
	int i = 0;
	int c = 0;
	if (ac != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while (str[1][i] != '\0')
	{
		if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			c = str[1][i] - 64;
		else if (str[1][i] >= 'a' && str[1][i] <= 'z')
			c = str[1][i] - 96;
		else
			c = 1;
		while(c > 0)
		{
			write(1, &str[1][i],1);
			c--;
		}
		i++;
	}
	write(1,"\n",1);
	return (0);
}
