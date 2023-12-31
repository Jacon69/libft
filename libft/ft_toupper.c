/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:54:45 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/10 12:24:35 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c > 96) && (c < 123))
		c -= 32;
	return (c);
}
/*int main(int argc, char *argv[])
{
	(void) argc;
	argv[1][0] = toupper(argv[1][0]);
// argv[1][0] = ft_toupper(argv[1][0]);
	write(1, argv[1],1);
}*/
