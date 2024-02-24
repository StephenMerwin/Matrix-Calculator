#include "MatrixCalculator.h"

void getMatrixDimension(int choice, int& rowsA, int& columnsA, int& columnsB){
  while(rowsA <= 0 || rowsA > MAX){
    cout << "Enter the number of rows for matrix A (1-" << MAX << "): ";
    cin >> rowsA;
    if(!cin){
      cin.clear();
      cin.ignore(999, '\n');
     }
   }
  while((columnsA > MAX || columnsA <= 0) && choice != 4){//if determinant no columns needed since its a square
    cout << "Enter the number of columns for matrix A (1-" << MAX << "): ";
    cin >> columnsA;
    if(!cin){
      cin.clear();
      cin.ignore(999, '\n');
     }
   }
  if(choice == 1 || choice == 2)//if add or subtract
    columnsB = columnsA;//a and b same size
  if(choice == 3){//if multiply
    do{//get b size
      cout << "Enter the number of columns for matrix B (1-" << MAX << "): ";
      cin >> columnsB;
      if(!cin){
        cin.clear();
        cin.ignore(999, '\n');
       }
     }while((columnsB > MAX || columnsB <= 0) && choice != 4);
   }
    //if determinant no matrix B
 }
