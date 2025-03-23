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
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (sorted(a, n)) {
		cout << "mang da duoc sap xep tang dan";
	}
	else {
		cout << "mang khong duoc sap xep tang dan";
	}
	return 0;
}