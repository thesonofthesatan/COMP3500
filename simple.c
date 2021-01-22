//Took Online help for this part
#include <math.h>
#include <stdio.h>

double
findSQRT (double A)
{
  return sqrt (A);
}

int
main ()
{

int A[10] = { 4, 9, 16, 25, 36, 49, 64, 81, 100, 121 };

int i;
  double Q;


  for (i = 0; i < 9; ++i)
    {
      Q = findSQRT (A[i]) + findSQRT (A[i + 1]);
    }
  double S = Q / 10;

  printf ("%f ", S);
  return 0;
}

