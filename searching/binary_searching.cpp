#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform binary search
int binary_search(vector<int>& door_num, int left, int right, int target) {
    if (left > right) {
        return -1; // Hedef bulunamazsa -1 döndür
    }

    int mid = (left + right) / 2;

    if (target == door_num[mid]) {
        cout << "Door number found: " << door_num[mid] << endl;
        return mid; // Hedef bulunduğunda indeks döndür
    } else if (target < door_num[mid]) {
        return binary_search(door_num, left, mid - 1, target);
    } else {
        return binary_search(door_num, mid + 1, right, target);
    }
}

int main() {
    int target = 6;
    vector<int> door_number = {25, 5, 1, 10, 12, 1, 4, 5, 6};

    // Binary search için vektörü sıralıyoruz
    sort(door_number.begin(), door_number.end());
	cout << door_number.size() << endl;

    cout << "Finding the door number:" << endl;

    int index = binary_search(door_number, 0, door_number.size() - 1, target);

    if (index != -1) {
        cout << "Door number found at index: " << index << endl;
    } else {
        cout << "Door number not found" << endl;
    }

    return 0;
}
//Update this binary search programming
