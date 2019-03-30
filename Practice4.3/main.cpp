#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int **arr, int row, int col) {
  srand(time(NULL));
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      arr[i][j] = rand() % 50 + 10;
    }
  }
}

void printArray(int **arr, int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j];
    }
  }
}

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    int **arr = new int* [row];

    for (int i = 0; i < row; i++) {
      arr[i] = new int [col];
    }
    fillArray(arr,row,col);
    printArray(arr,row,col);
}
