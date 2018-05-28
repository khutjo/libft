#include <stdio.h>
#include "libft.h"

int main(void)
{
	char d[] = "      split       this for   me  !       ";
	char **result = ft_strsplit(d, ' ');
	
	printf("%s",result[0]);
	return (0);
}
