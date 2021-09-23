#include <stdio.h>

int is_pow_2(unsigned int n)
{
  return( (n &(n-1) == 0) );
}

main()
{
  int x = 5;
  int istrue;
  istrue = is_pow_2(x);
  printf("number %d is power of 2 = %d",x,istrue );
}
