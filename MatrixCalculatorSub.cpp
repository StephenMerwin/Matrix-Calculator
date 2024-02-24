#include "MatrixCalculator.h"

void sub(double matrixA[MAX][MAX], double matrixB[MAX][MAX], int rowsA, int columnsA){
  cout << "Subtracting matrix A and B results in the following matrix: " << endl;
  for(int i = 0; i < rowsA; ++i){
    for(int j = 0; j < columnsA; ++j){
      matrixA[i][j] -= matrixB[i][j];
      cout << right << setw(6) << matrixA[i][j];
     }
  cout << endl;
   }
 }
