#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

#define N 5
#define M 3

int main()
{


	int* mas1 = (int*)malloc(N * sizeof(int));
	int* mas2 = (int*)malloc(M * sizeof(int));
	int* mas3 = (int*)malloc(N + M * sizeof(int));

	fill_mas(mas1, mas2, N, M);
	fill_mas3(mas1, mas2, N, M, mas3);
	sort_mas3(N, M, mas3);
	free(mas1);
	free(mas2);
	free(mas3);
	return 0;
}