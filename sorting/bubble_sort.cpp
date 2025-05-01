// Basit Bubble Sort algoritması
//Komşu elemanları karşılaştırır ve büyük olanı sağa iter (baloncuk gibi yukarı çıkar).
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
//Add bubble sort example
