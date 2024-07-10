#include <stdio.h>
int main()
{
  int a = 3, b = 20;
  // int sum;
  int sum = a + b;
  int subtraction = b - a;
  int mlt = a * b;
  int division = b / a;
  float division_float = b*1.0 / a;
  int mod = b%a;
  int mod2 = a%b;
  printf("%d %d %d %f %d %d", sum, subtraction, mlt, division_float, mod, mod2);
  return 0;
}