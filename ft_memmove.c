#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}

    


    // int main(){
    //     char src[] = "We will go home";
    // char dest1[] = "aaaaabbbbbccccc";
    // char dest2[] = "aaaaabbbbbccccc";
    // char dest3[] = "aaaaabbbbbccccc";

    // ft_memmove(dest1, src, sizeof(char) * 15);
    // // src 길이만큼 복사

    // ft_memmove(dest2, src, sizeof(char) * 15 -5);
    // // src 길이 + 1 만큼 복사사

    // ft_memmove(dest3 + 10, src, sizeof(char) * 3);
    // // 메모리 일부 복사

    // printf("src: %s\n", src);

    // printf("dest1: %s\n", dest1);
    // printf("dest2: %s\n", dest2);
    // printf("dest3: %s\n", dest3);
    // }
    // int main(){
    // int src[] = {7, 6, 5, 4, 3, 2, 1};
    // int dest[7];

    // ft_memmove(dest, src, sizeof(src));

    // for (int i = 0; i < 7; i++)
    //     printf("%d ", src[i]);
    
    // printf("\n");

    // for (int i = 0; i < 7; i++)
    //     printf("%d ", dest[i]);

    // printf("\n");
    
    // }
