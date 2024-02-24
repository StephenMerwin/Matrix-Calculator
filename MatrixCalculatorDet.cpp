#include "MatrixCalculator.h"
double det(double matrixA[MAX][MAX], int n){//n is the square dimension of the matrix
  if(n == 1)
    return matrixA[0][0];
  if(n == 2)
    return matrixA[0][0] * matrixA[1][1] - matrixA[1][0] * matrixA[0][1];
  double d = 0.0;//holds determinant value
  double matrix2[MAX][MAX];
  for(int i = 0; i < MAX; ++i)
    for(int j = 0; j < MAX; ++j)
      matrix2[i][j] = matrixA[i][j];//create copy
  for(int c = 0; c < n; ++c){//moves along the top row of matrix, matrixA[0][c] will be multiplied by the remaining matrix in the equation
    for(int i = 1; i < n; ++i){//the row numbers (row 0 will never be used as part of the sub matrix as it shares a line with c
      for(int j = 0; j < n; ++j){//the column numbers to find matrixB
        if(j != c){//if the column is not the same as column c it will be included
          if(j > c)//if the column c has already been skipped store the values one column to the left
            matrixA[i-1][j-1] = matrix2[i][j];
          else
            matrixA[i-1][j] = matrix2[i][j];
         }
       }
     }
    d += (pow(-1 ,c+2) * matrix2[0][c] * det(matrixA, n-1));//update determinant value
   }
return d;
 }

