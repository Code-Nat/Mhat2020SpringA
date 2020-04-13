#include <stdio.h>

float find_min_length(float A[6][6], int point1, int point2)
{
	float min = -1; 
	int i;
	if (A[point1][point2] != -1)
		min = A[point1][point2];
	for (i = 0; i < 6; i++)
		if ((A[point1][i] != -1) && (A[point2][i] != -1) && (((A[point2][i] + A[point1][i]) < min) || min == -1))
			min = A[point2][i] + A[point1][i];
	return min;
}

int main()
{
	float arr[6][6] = {
		{0.0,1.3,2.1,1.7,3.1,-1},
		{1.3,0.0,1.2,-1,-1,-1},
		{2.1,1.2,0.0,-1,-1,-1},
		{1.7,-1,-1,0.0,1.3,0.9},
		{3.1,-1,-1,1.3,0.0,-1},
		{-1,-1,-1,0.9,-1,0.0}
	};
	printf("%.1f",find_min_length(arr, 0, 2));
	return 0;
}