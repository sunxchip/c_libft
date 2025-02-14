#include <stdio.h>
#include "libft.h"

void ft_bzero(void *b, size_t size){
	unsigned char * bb;
	
	bb = (unsigned char *)b;
	unsigned int  zero =0 ;

	size_t i =0;
	
	while(i < size){
		bb[i++] = (unsigned int)zero;
	} 
	
	return ;

}