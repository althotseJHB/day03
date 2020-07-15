/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:57:26 by althotse          #+#    #+#             */
/*   Updated: 2020/07/14 08:57:34 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_swap(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = *a;
}

void main()
{
	int m;
	int y;

	ft_swap(&m, &y)

	return ();
}
