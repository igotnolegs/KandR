#include <stdio.h>

main()
{
  int c, foo;

  c = getchar();
  while (c != EOF) {
    foo = 0;
    if (c == '\\') {
        putchar('\\');
        putchar('\\');
        foo = 1;
    }
    if (c == '\b') {
      putchar('\\');
      putchar('b');
      foo = 1;
    }
    if (c == '\t') {
      putchar('\\');
      putchar('t');
      foo = 1;
    }
    if (foo == 0)
      putchar(c);
    c = getchar();
  }
}
