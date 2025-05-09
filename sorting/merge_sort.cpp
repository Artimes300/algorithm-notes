#include <iostream>
#include <vector>
using namespace std;

// İki sıralı alt diziyi birleştiren fonksiyon
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Sol alt dizinin boyutu
    int n2 = right - mid;   // Sağ alt dizinin boyutu

    // Geçici diziler oluştur
    vector<int> L(n1), R(n2);

    // Verileri geçici dizilere kopyala
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // İki alt diziyi birleştir
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Kalan elemanları kopyala
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort fonksiyonu
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
		int mid = left + (right - left) / 2; // Ortayı bul./ Taşma riskini önle bunun için bunu kullanma = (left + right)/2.

        // Sol ve sağ alt dizileri sırala
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Alt dizileri birleştir
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Sıralama öncesi: ";
    for (int num: arr)
        cout << num << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sıralama sonrası: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
//Add a merge sort examples
