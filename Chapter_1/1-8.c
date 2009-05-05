#include <stdio.h>

//Blank, Tab and Newline Counter, Exercise 1-8
main()
{
  int c, nl, tab, blank;

  nl = 0;
  tab = 0;
  blank = 0;
  while ((c = getchar()) != EOF){
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++tab;
    if (c == ' ')
      ++blank;
  }
  printf("%d new lines, %d tabs, %d blank lines.\n", nl, tab, blank);
}
