/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:28:32 by chakim            #+#    #+#             */
/*   Updated: 2020/02/06 16:12:37 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);
int 	main()
{
	char a[] ="  ++-+-+-1324abdi!";
	printf("%d\n", ft_atoi(a));
	return (0);
}