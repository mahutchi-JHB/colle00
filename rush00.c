#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#include "main.c"
//#include "ft_putchar.c"
void ft_putchar(char sym);

void rush(int x, int y){
  char sym;
  unsigned int a;
  unsigned int b;

  a = 0;
  b = 0;

  if (!x || !y) {
    exit(-1);
  }

  while(a < y) {

    while (b < x) {

        if ((a == 0 || a == y-1) && (b == 0 || b == x-1)) {
          sym = 'o';
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
