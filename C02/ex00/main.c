#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int        main(void)
{
    char source[] = "Source string.";
    char destin[] = "Destination string.";
    char *dest;

    printf("Antes\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

    printf("Depois\n\tsrc: %s\n\tdes: %s\n", source, dest);
    return (0);
}
