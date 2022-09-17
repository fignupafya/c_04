/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:44:09 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/13 03:02:02 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspc(char a)
{
	if (a == ' ')
		return (1);
	if (a <= 13 && a >= 9)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	k;
	int	sgn;
	int	num;

	num = 0;
	k = 0;
	sgn = 1;
	while (isspc(str[k]) == 1)
		k++;
	while (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			sgn *= -1;
		k++;
	}
	while (str[k] <= '9' && str[k] >= '0')
	{
		num *= 10;
		num += str[k] - 48;
		k++;
	}
	num *= sgn;
	return (num);
}
