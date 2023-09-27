/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:34:21 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/18 22:12:39 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	i = 0;
	while ((i < dstsize - 1) && (src[i] == '\0'))
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main (void)
{
	char str1[20]="Hola Mindo !!"; //origen 
	char str2[5]="aaaaa"; //Destino

//	printf("esto es lo que devuelve original %zu \n", strlcpy(str2, str1,5));
	printf("esto es lo que devuelve propia  %zu \n", ft_strlcpy(str2, str1,5));
    printf("%s \n", str2);
}*/
