/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zegenc <zegenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:42:46 by zegenc            #+#    #+#             */
/*   Updated: 2023/10/29 20:12:23 by zegenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1)
	{
		d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!d)
			return (NULL);
		while (s1[i])
		{
			d[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			d[i++] = s2[j];
			j++;
		}
		d[i] = '\0';
		return (d);
	}
	return (0);
}
