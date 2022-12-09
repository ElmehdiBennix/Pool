/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:47:02 by ebennix           #+#    #+#             */
/*   Updated: 2022/07/30 18:39:22 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str [i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
		{
		i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}