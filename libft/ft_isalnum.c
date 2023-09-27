/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:39:42 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/26 12:03:41 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < 48) || (c > 122))
		return (0);
	if (((c > 57) && (c < 65)) || ((c > 90) && (c < 97)))
		return (0);
	return (1);
}
 /*int	main	(void)
{
	printf("resultado %i", ft_isalnum (102));
	return(0);
}*/
