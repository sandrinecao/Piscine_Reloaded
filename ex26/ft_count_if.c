/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:39:19 by scao              #+#    #+#             */
/*   Updated: 2018/11/07 17:32:42 by scao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		r;

	i = 0;
	r = 0;
	while (tab[i])
	{
		if ((*f)(tab[i++]) == 1)
			r++;
	}
	return (r);
}
