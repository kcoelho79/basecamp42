#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int res=0;
	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
	printf(" 5 = %d (120)\n", ft_iterative_factorial(5));
	printf(" 7 = %d (5040)\n", ft_iterative_factorial(7));
	printf(" 9 = %d (362880)\n", ft_iterative_factorial(9));

	res =  (ft_iterative_factorial(12));
	if (res == 479001600)
		printf("12! = (%i ) correto\n",res);
	else
		printf("12! = (%i ) esta errado\n",res);

}