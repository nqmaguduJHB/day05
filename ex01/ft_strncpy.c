/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:10:14 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/15 15:21:49 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while(src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while(index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

