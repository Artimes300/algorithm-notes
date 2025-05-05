#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Sıralama öncesi: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    selectionSort(arr, 0, arr.size() - 1);

    cout << "Sıralama sonrası: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
// This code implements the selection sort algorithm in C++.
// Create an selection sort example.
