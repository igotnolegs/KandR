#include <stdio.h>

main()
{
  int c, foo;

  foo = ((c = getchar()) != EOF);

  printf("EOF is %d.\n", foo);
}
