#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	char n[] = " ---+--+1234ab567";

	printf("atola :%i\n", ft_atoi(n));
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));

}
