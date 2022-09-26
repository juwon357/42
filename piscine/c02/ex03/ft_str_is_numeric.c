/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:47:02 by juwkim            #+#    #+#             */
/*   Updated: 2022/04/24 15:48:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	return (('0' <= c) && (c <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!is_numeric(*str++))
			return (0);
	}
	return (1);
}