/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:02:51 by tpillot           #+#    #+#             */
/*   Updated: 2018/11/23 15:02:55 by tpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	t;

	if (n < 0)
	{
		t = -n;
		ft_putchar('-');
	}
	else
		t = n;
	if (t > 9)
		ft_putnbr(t / 10);
	ft_putchar(t % 10 + 48);
}