#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform linear search
bool linear_search(vector<int>&door_num,int target) {
	if(target <0)
		return false;
	for (int b = 0; b < door_num.size(); b++)
	{
		if (door_num[b] == target)
		{
			
			return true;
    }
	}
	return false;
}

int main() {
	int x;
	int target = 6;
	vector<int>door_number = { 25,5,1,10,12 };
	cout << "Finding the door number:" << endl;
	x = linear_search(door_number,target);
	if (x == 1)
		cout << "Door number found" << endl;
	else if (x == 0)
		cout << "Door number not found" << endl;
   return 0;		
}
//Create a linear searching
