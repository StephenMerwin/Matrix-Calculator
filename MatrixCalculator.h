/****************************************************************
* author: Stephen Merwin
* class: CS1B Summer
* date: 06/05/17
* function: takes matrices from user input and performs arithmetic operations on them
****************************************************************/
#ifndef HEADER_H
#define HEADER_H
#define MAX 10//max dimension of matrix sides

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void add(double[MAX][MAX], double[MAX][MAX], int, int);//addition of matrices
void sub(double[MAX][MAX], double[MAX][MAX], int, int);//subtraction of matrices
void mul(double[MAX][MAX], double[MAX][MAX], int, int, int);//multiplication of matrices
double det(double[MAX][MAX], int);//determinant of matrix
int menu();//displays user interface and returns choice value
void getMatrixInput(double[MAX][MAX], int);//gets 1 matrix input
void getMatrixInput(int, double[MAX][MAX], double[MAX][MAX], int, int, int);//gets 2 matrix inputs
void getMatrixDimension(int, int&, int&, int&);

#endif

