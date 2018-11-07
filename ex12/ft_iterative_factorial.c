/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:51:06 by scao              #+#    #+#             */
/*   Updated: 2018/11/07 15:05:58 by scao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	if ((nb < 0) || (nb > 12))
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = (result * nb);
		nb--;
	}
	return (result);
}
