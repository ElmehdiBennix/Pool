/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:07:10 by ebennix           #+#    #+#             */
/*   Updated: 2022/07/21 16:07:15 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	a;

	a = 'a' ;
	while (a <= 'z' )
	{
		write (1, &a, 1);
		a++;
	}
}