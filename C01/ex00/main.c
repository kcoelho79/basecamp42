#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int a;
	int *pt;

	a = 0;
	pt = &a;

	ft_ft(pt);

	printf("retorno do ponteiro : %i\n",*pt);


}
