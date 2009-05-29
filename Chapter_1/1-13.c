//EXERCISE 1-13
#include <stdio.h>

/*print a histogram of the length of words in the program's input*/
main()
{
  int c, nletter, gbar;
  int nword[nletter];
  
  nletter = 0;
  while ((c = getchar()) != EOF)
      if (c == ' ' || c == '\t' || c == '\n') {
        ++nword[nletter-1];
        nletter = 0;
      }
      else
        nletter ++;
  
  printf("Graph of word length\n");
  gbar = 0;
  for (nletter = 0; nletter < 10; ++nletter) {
      printf("%d:", nletter);
      while (gbar != nword[nletter]) {
      printf("=");
      ++gbar;
    }
    printf("\n");
    gbar = 0;
  }
}
