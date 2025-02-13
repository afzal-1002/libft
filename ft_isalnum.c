/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:44 by mafzal            #+#    #+#             */
/*   Updated: 2024/12/29 22:45:52 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z') || (num >= '0'
			&& num <= '9'))
		return (1);
	return (0);
}
