#include <iostream>

void bubble(int arr[], int n) {
  int i, j;
  int temp;
  for (i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++){
      if (arr[j] > arr[j+1]) {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      }
    }
  }
}

void bubble(float arr[], int n) {
  int i, j;
  float temp;
  for (i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++){
      if (arr[j] > arr[j+1]) {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      }
    }
  }
}

int main(int argc, char const *argv[]) {

  return 0;
}
