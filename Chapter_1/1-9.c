#include <stdio.h>

/*copy input to output, if there are strings of blanks, replace it with one blank*/
main()
{
  int c, gotchar;

  gotchar = EOF;

  while ((c = getchar()) != EOF) {
      if (c == ' ')
      if (gotchar != ' ')
        putchar(c);

      if (c != ' ')
        putchar(c);
      gotchar = c;
  }
}

