#include "MatrixCalculator.h"

int menu(){
  int choice = 0;
  do{
    cout << "Choose matrix operation:" << endl
         << "  1. Addition" << endl
         << "  2. Subtraction" << endl
         << "  3. Multiplication" << endl
         << "  4. Determinant" << endl
         << "  5. Exit" << endl;
    cin >> choice;
    if(!cin){
      cin.clear();
      cin.ignore(999, '\n');
     }
   }while(choice > 5 || choice < 1);//if the user did not enter an appropriate value (1-5) it will try again
return choice;
 }
