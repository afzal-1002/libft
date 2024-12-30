/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:42:19 by mafzal            #+#    #+#             */
/*   Updated: 2024/12/30 18:02:28 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmpr(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*bigstr;
	const char	*litlstr;
	size_t		i;
	size_t		num;
	size_t		litllen;

	bigstr = (const char *)big;
	litlstr = (const char *)little;
	litllen = ft_strlen(litlstr);
	i = 0;
	if (little[i] == '\0')
		return ((char *)bigstr);
	while (bigstr[i] != '\0' && len >= i + litllen)
	{
		if (bigstr[i] == litlstr[0])
		{
			num = ft_strcmpr((char *)bigstr + i, (char *)litlstr);
			if (num == 1)
				return ((char *)bigstr + i);
		}
		i++;
	}
	return (NULL);
}
