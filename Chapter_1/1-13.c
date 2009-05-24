//EXERCISE 1-13
#include <stdio.h>

/*print a histogram of the length of words in the program's input*/
main()
{
  int c, i, nletter;
  int nword[nletter];
  
  i = nletter = 0;
  while ((c = getchar()) != EOF)
      if (c == ' ' || c == '\t' || c == '\n') {
        ++nword[nletter-1];
        nletter = 0;
        }
      else
        nletter ++;
  
  printf("digits =");
  for (nletter = 0; nletter < 10; ++nletter)
     printf(" %d", nword[nletter]);
}
