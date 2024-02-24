/**************************************************
* author: Stephen Merwin
**************************************************/
#include "MatrixCalculator"
int main(){ 
  int choice = 0, rowsA, columnsA, columnsB;
  double matrixA[MAX][MAX];
  double matrixB[MAX][MAX];
  while(choice < 5){
    rowsA = 0;
    columnsB = 0;
    columnsA = 0;
    choice = menu();
    if(choice != 5){
      getMatrixDimension(choice, rowsA, columnsA, columnsB);
      if(choice == 4)
        getMatrixInput(matrixA, rowsA);
      else
        getMatrixInput(choice, matrixA, matrixB, rowsA, columnsA, columnsB);
     }
    switch(choice) {
      case 1 : add(matrixA, matrixB, rowsA, columnsA);
        break; 
      case 2 : sub(matrixA, matrixB, rowsA, columnsA);
        break; 
      case 3 : mul(matrixA, matrixB, rowsA, columnsA, columnsB);
        break; 
      case 4 : cout << endl << "The determinant of the matrix is " << det(matrixA, rowsA) << "." << endl;
        break;
      default: return 0; 
     }
   }
return 0;
}
