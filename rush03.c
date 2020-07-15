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
              sym = 'A';
          } else if(cnr == 1){
              sym = 'C';
              cnr ++;
          } else if(cnr == 2){
              sym = 'A';
              cnr ++;
          } else if(cnr == 3){
              sym = 'C';
              cnr = 0;
          }
        } else if (a == 0 || a == y-1) {
          sym = 'B';
        } else if (b == 0 || b == x-1) {
          sym = 'B';
        } else {
          sym = ' ';
        }
        b++;

        ft_putchar(sym);
    }
    a++;
    b = 0;
    ft_putchar("%/N");
  }
}
