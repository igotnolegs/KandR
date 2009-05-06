#include <stdio.h>

/*copy input to output, if there are strings of blanks, replace it with one blank*/
main()
{
  int c;
  
  c = getchar();
  while (c != EOF) {
    if (c != ' ') {
putchar(c);
    }
    c = getchar();
  }
}
