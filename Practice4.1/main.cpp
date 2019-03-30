#include "iostream"

using namespace std;

double* setMemory(int n) {
  double *arr = new double [n];
  return arr;
}

void setData(double *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << "array[" << i << "] = ";
    cin >> arr[i];
  }
}

void getData(double *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << "array[" << i << "] = ";
    cout << arr[i] << endl;
  }
}

void freeMemory(double *arr) {
  delete [] arr;
}


int main(int argc, char const *argv[]) {
  double *arr = nullptr;
  bool again = true;
  int n;

  while (again) {
    cout << "Enter array size: ";
    cin >> n;
    arr = setMemory(n);
    setData(arr,n);
    getData(arr,n);
    freeMemory(arr);
    cout << "Wanna continue? (1/0) ";
    cin >> again;
  }
  return 0;
}
