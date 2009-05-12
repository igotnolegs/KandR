#include <stdio.h>

#define IN  1
#define OUT 0

#define NEWLINE 1
#define NOLINE  0

main()
{
  int c, state, nl;

  state = OUT;
  c = getchar();
  nl = 0;
  while (c != EOF) {
    if (c == '\n' || c == '\t' || c == ' ' || nl == NOLINE) {
      putchar('\n');
      nl = NEWLINE;
    }
    else if (c != '\n' || c != '\t' || c != ' ') {
      putchar(c);
      nl = NOLINE;
    }
    c = getchar();
  }
}
