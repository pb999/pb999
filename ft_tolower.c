/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:09:13 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 16:48:01 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if ( a >= 'A' && a<= 'Z')
		a = (a + 32);
	return ((int)a);
}
