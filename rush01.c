/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahutchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:23:40 by mahutchi          #+#    #+#             */
/*   Updated: 2020/07/15 12:23:43 by mahutchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char sym);

void rush(int x, int y){
  char sym;
  unsigned int a;
  unsigned int b;

  a = 0;
  b = 0;
  unsigned int cnr = 0;

  if (!x || !y) {
    exit(-1);
  }

  while(a < y) {

    while (b < x) {

        if ((a == 0 || a == y-1) && (b == 0 || b == x-1)) {
          if(cnr == 0){
              cnr++;
              sym = '/';
          } else if(cnr == 1){
              sym = '\\';
              cnr ++;
          } else if(cnr == 2){
              sym = '\\';
              cnr ++;
          } else if(cnr == 3){
              sym = '/';
              cnr = 0;
          }
        } else if (a == 0 || a == y-1) {
          sym = '-';
        } else if (b == 0 || b == x-1) {
          sym = '|';
        } else {
          sym = ' ';
        }
        b++;

        ft_putchar(sym);
    }
    a++;
    b = 0;
    ft_putchar('\n');
  }
}
