/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:53:44 by juwkim            #+#    #+#             */
/*   Updated: 2022/04/24 15:54:32 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	return (('A' <= c) && (c <= 'Z'));
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!is_upper(*str++))
			return (0);
	}
	return (1);
}