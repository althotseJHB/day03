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

int   ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}


int   main()
{
  int a;
  int b;

  a = 9;
  b = 2;

  ft_div_mod(&div);

  printf("%d", div);
  return (0);

}
