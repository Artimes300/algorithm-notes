#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pivot olarak son eleman seçiyoruz
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); // Küçük elemanları sola at
        }
    }

    swap(arr[i + 1], arr[high]); // Pivotu doğru yerine koy
    return i + 1; // Pivotun yeni yeri
}

void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);  // Sol tarafı sırala
        quick_sort(arr, pivot_index + 1, high); // Sağ tarafı sırala
    }
}

int main() {
    vector<int> data = { 7, 2, 1, 6, 8, 5, 3, 4 };

    cout << "Before sorting: ";
    for (int n : data) cout << n << " ";
    cout << endl;

    quick_sort(data, 0, data.size() - 1);

    cout << "After sorting: ";
    for (int n : data) cout << n << " ";
    cout << endl;

    return 0;
}
//Add a quick sort example...
