#include <stdio.h>
void prime_factors(int);

int main()
{
  int n;
  scanf("%d", &n);
  prime_factors(n);
  return 0;
}

void prime_factors(int n)
{
  for (int d = 2; d * d <= n; d++)
  {
    if (n % d == 0)
      printf("%d\n", d);
    while (n % d == 0)
      n /= d;
  }
  if (n > 1)
    printf("%d\n", n);
}
