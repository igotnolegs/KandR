#include <stdio.h>

/*copy input to output, if there are strings of blanks, replace it with one blank*/
main()
{
  int c;
  
  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++c;
      putchar(' ');
    putchar(c);
}
