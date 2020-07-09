/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:30:53 by tpillot           #+#    #+#             */
/*   Updated: 2018/12/10 19:53:47 by tpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_itoa(int n, int base)
{
	char			*str;
	int				count;
	unsigned int	t;
	int tmp;

	count = 0;
	if (n < 0)
	{
		count++;
		t =-n;
	}
	else
		t = n;
	tmp = t;
	while (t > 0)
	{
		t = t / base;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	str[count--] = '\0';
	t = tmp;
	while (t > 0)
	{
		str[count] = t % base + 48;
		t = t / base;
		count--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int main(void)
{
	printf("%s\n", ft_itoa(0, 10));
}