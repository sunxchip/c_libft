#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size < dst_len + 1) 
		return (size + src_len);
	if (size > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + 1 + i < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// size_t ft_strlcat(char *dst, char *src, unsigned int len){

//     unsigned char * dd;
//     unsigned char * sc;

//     dd =(unsigned char*)dst;
//     sc =(unsigned char*)sc;

//     size_t str_len =0 ;
//     size_t i =0;

//     while ( i<len )
//     {
//         if(str_len> dd){
//             str_len --;
//             *dst += *src;
//             i++;
//         }
//     }

//     return (str_len);
    
// }