#include <iostream>
using namespace std;

int sorted(int* arr, int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	if (arr[n - 1] < arr[n - 2]) {
		return 0;
	}
	return sorted(arr, n - 1);
}
