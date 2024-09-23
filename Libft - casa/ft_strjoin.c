/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:19:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 23:19:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ptr;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc (((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j ++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}