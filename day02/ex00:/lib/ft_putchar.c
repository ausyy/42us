/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 16:32:28 by gsamora           #+#    #+#             */
/*   Updated: 2016/08/10 16:32:28 by gsamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c){

		write(1, &c, 1);
		return(0);
}
