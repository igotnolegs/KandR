#include <stdio.h>

//print Fahrenheit-Celcius table
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    //lower limit of temperature table
  upper = 300;  //upper limit of table
  step = 20;    //step size

  celsius = lower;
  printf("Celsius to Fahrenheit conversion table\n");
  while (fahr <= upper) {
    celsius = (((fahr * 9) / 5) + 32);
    printf("%6.1f %3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }
}
