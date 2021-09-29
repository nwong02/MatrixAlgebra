/*
* Title			: Matrices.cpp
* Project		: Matrix Algebra
* Author		: Nelson Wong
* Description	: Writing all the functions of basic matrix algebra operations
*/


#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

double** buildMatrix(int i, int j)
{
	double** matrix = 0;
	matrix = new double*[i];
	for (int n = 0; n < i; n++)
	{
		matrix = new double*[j];
		for (int m = 0; m < j; m++)
		{
			matrix[i][j];
		}
	}
	return matrix;
}

int main()
{
	return 0;
}