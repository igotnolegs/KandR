//EXERCISE 1-13

/*print a histogram of the length of words in the program's input*/

#include <stdio.h>

#define MAXLENGTH 12 /*max word length*/
main()
{
  int c, nletter, i;
  int nword[MAXLENGTH];
  
  nletter     =   0;
  for (i = 0; i <= MAXLENGTH; ++i)
    nword[i] = 0;
  
  while ((c = getchar()) != EOF)
      if (c == ' ' || c == '\t' || c == '\n') {
        ++nword[nletter];
        nletter = 0;
      }
      else if (nletter <= MAXLENGTH)
          nletter ++;
      
  
  printf("LENGTH OF WORDS:\n");
  for (i = 1; i <= MAXLENGTH; ++i)
    printf("%d: %d\n", i, nword[i]);
}
