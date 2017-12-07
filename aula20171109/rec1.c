#include <stdio.h>
int soma (int *a, int N)
{
	int s=0;
	if (N>=0)
		s = a[N] + soma (a, N-1);
		return s;
}
int main ()
{
	int s=0;
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int N = sizeof(A)/sizeof(int);
	s = soma(A, N-1);
	printf("\nSoma = %d", s);
	return 0;
}
