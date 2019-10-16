#include <stdlib.h>
#include <stdio.h>
main()
{
	
  int i, j, k, n, A[101];
  int d, e;
  int max = 0, max_a, max_c;
  int a, b, c;

  scanf("%d", &n);
  for(i = 0; i < n; i++)
    scanf("%d", &A[i]); 

  for(a = 0; a < n - 1; a++)
  for(c = a + 1; c < n; c++)
  for(b =a; b <= c; b++) {
    d = 0;
    e = 0;
    for(i = 0; i <= (b + a) / 2 && d == 0; i++)
      if(A[a + i] != A[b - i]) d = 1;
    for(i = 0; i <= (c - b) / 2 && e == 0; i++)
      if(A[b + i] != A[c - i]) e = 1;
    if((d == 0) && (e == 0) && (c - a > max)) {
      max = c - a;
      max_a = a;
      max_c = c;
    }
  }

  for(i = max_a; i <= max_c; i++)
    printf("%d ", A[i]);
  printf("\n");

}
