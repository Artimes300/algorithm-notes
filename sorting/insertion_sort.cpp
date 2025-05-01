#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// This program sorts an array using the Insertion Sort algorithm
//Insertion Sort
//Kart dizmeye benzer. Her elemanı uygun yere "sokar".
void insertionSort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		// Move elements of arr[0..i-1], that are greater than key,
		// to one position ahead of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
    vector<int> door_number = {25, 5, 1, 10, 12, 1, 4, 5, 6};
	cout << "Before sorting: ";
	for (int i = 0; i < door_number.size(); i++) {
		cout << door_number[i] << " ";
	}
	cout << endl;
	insertionSort(door_number);
	cout << "After sorting: ";
	for (int i = 0; i < door_number.size(); i++) {
		cout << door_number[i] << " ";
	}
	cout << endl;
    return 0;
}
//Add insertion sort example
