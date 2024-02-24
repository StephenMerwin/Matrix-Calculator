#include "MatrixCalculator.h"

void mul(double matrixA[MAX][MAX], double matrixB[MAX][MAX], int rowsA, int columnsA, int columnsB){
  double matrixC[MAX][MAX];
  for(int x = 0; x < MAX; ++x)//set all values of matrixC to 0
    for(int y = 0; y < MAX; ++y)
      matrixC[x][y] = 0;

  for(int i = 0; i < rowsA; ++i)//set matrixC to the product of matrixA and matrixB
    for(int j = 0; j < columnsB; ++j)
      for(int k = 0; k < columnsA; ++k)
        matrixC[i][j] += matrixA[i][k] * matrixB[k][j];

  cout << "Multiplying matrix A and B results in the following matrix: " << endl;
  for(int x = 0; x < rowsA; ++x){//output matrix
    for(int y = 0; y < columnsB; ++y){
      cout << right << setw(6) << matrixC[x][y];
     }
    cout << endl;
   }
 }

