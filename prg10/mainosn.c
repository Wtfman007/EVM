#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "fun.h"

int main(void) 
{
  FILE *out;
  int err1, err, k, n, *array = NULL;
  out = fopen("data.res", "w");
  if (out==NULL) return -1;
  err = Input("data.dat", &array, &n);
  if (err != 0)
    return -1;
  else
  {
  err1 = Func(array, &k);
  if (err1 == -1)
    return -1;
  else fprintf(out,"%d", err1);
  if(array)free(array);
  array = NULL;
  return 0;
  }
}
