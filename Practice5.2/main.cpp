void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    int temp;
    for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
          min_idx = j;
          temp = arr[min_idx];
          arr[min_idx] = arr[i];
          arr[i] = temp;
    }
}
void selectionSort(float arr[], int n) {
    int i, j, min_idx;
    float temp;
    for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
          min_idx = j;
          temp = arr[min_idx];
          arr[min_idx] = arr[i];
          arr[i] = temp;
    }
}
int main(int argc, char const *argv[]) {
  
  return 0;
}
