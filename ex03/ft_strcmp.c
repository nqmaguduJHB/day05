/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:36:06 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/16 13:48:35 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while(s1[index] == s2[index])
	{
		if (s1[index] == '\0')
			return (0);
		index++;
	}
	return ((int)s1[index] - (int)s2[index])
}
