#include <stdio.h>

/*copy input to output, one work per new-line*/

main()
{
  int c;

  c = getchar();
  while(c != EOF) {
    if(c == ' ' || c == '\t' || c == '\n')
      putchar('\n');
    else
      putchar(c);
    c = getchar();
  }
}
