/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:05:42 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/16 13:33:01 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strstr(char *str, char *to_find)

{
	int index;
	int b;

	index = 0;
	b = 0;
	if (to_find[0] == '\0')
		return str;
	while(str[index] != '\0')
	{
		b = 0;
		while (str[index + b] == to_find[b])
		{
			if (to_find[b] == '\0')
				return(str + index);
			b++;
		}
		index++;
	}
	return(0);
}


