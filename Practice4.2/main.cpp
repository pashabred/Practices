#include <iostream>

using namespace std;

void swap(*arr) {
	int temp;
	for (int i = 0; i < 12; i+=2) {
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
}

int main() {
	int *arr = new int[12];
	swap(arr);
	return 0;
}
