#include "MatrixCalculator.h"

void getMatrixInput(double matrixA[MAX][MAX], int rowsA){//det is a square so columnsA is not needed
  for(int i = 0; i < rowsA; i++){
    for(int k = 0; k < rowsA; k++){
      do{
        cin.clear();
        cin.ignore(999,'\n');
        cout << "Input the value for row " << i+1 << " and column " << k+1 << " of matrix A: ";
        cin >> matrixA[i][k];
       }while(!cin);
     }
   }
 }

void getMatrixInput(int choice, double matrixA[MAX][MAX], double matrixB[MAX][MAX], int rowsA, int columnsA, int columnsB){
  int rowsB = 0;
  if(choice == 3)
    rowsB = columnsA;
  else
    rowsB = rowsA;
  for(int i = 0; i < rowsA; i++){
    for(int k = 0; k < columnsA; k++){
      do{
        cin.clear();
        cin.ignore(999,'\n');
        cout << "Input the value for row " << i+1 << " and column " << k+1 << " of matrix A: ";
        cin >> matrixA[i][k];
       }while(!cin);
     }
   }
  for(int i = 0; i < rowsB; i++){
    for(int k = 0; k < columnsB; k++){
      do{
        cin.clear();
        cin.ignore(999,'\n');
        cout << "Input the value for row " << i+1 << " and column " << k+1 << " of matrix B: ";
        cin >> matrixB[i][k];
       }while(!cin);
     }
   }
 }
