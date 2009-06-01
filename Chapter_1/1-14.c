#include <stdio.h>
/*write a histogram of the frequency of different characters in program's
input*/

main()
{
  int c, gbar, namount, gcounter;
  int nchar[namount];

  namount = 0;
  while ((c = getchar()) != EOF) {
      nchar = getchar();
      ++nchar[namount];
      }
  
      
  printf("Graph of Character frequency\n")

  gbar = 0;
  for (nchar = 0; nchar <= 127; ++nchar) {
    printf("%c:", nchar);
    while (gbar != nchar[namount]) {
      printf("=");
      ++gbar;
      }
    printf("\n");
    gbar = 0;
  }
}
