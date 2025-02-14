#include <stdio.h>
#include "libft.h"

int main(){

		char str[10]="0123456789";

		printf("[%s]\n",str);
		ft_bzero(str,3);
		for (int i =0; i<10; i++)
		printf("[%c]",str[i]);
	}
