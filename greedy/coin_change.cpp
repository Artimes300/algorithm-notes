#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to find the minimum number of coins needed to make up a given amount
int find(vector<int>& coins, int amount) {
	int count = 0; // Initialize the count of coins to 0
	sort(coins.begin(), coins.end(), greater<int>()); // Sorting coins from largest to smallest {25, 10, 5, 1}
	//Alternating: coins.rbegin(), coins.rend() // Sorting coins from smallest to largest {1, 5, 10, 25} and then reversing.
	for(int i = 0; i < coins.size(); i++){
		if (amount == 0) // If the amount is 0, no coins are needed
		{
			break; // Exit the loop
		}
		while (amount >= coins[i])
		{
			amount = amount - coins[i]; // Subtract the coin value from the amount
			count++; // Increment the coin count
		}
			
	}
	return count;
}
int main() {
	vector<int>coins = { 25,5,1,10 };
	int amount = 63;
	cout <<"Obtaining the total money using the minimum number of coins"<< endl;
	cout<<"The result:"<<find(coins, amount)<<endl;
   return 0;		
}
//Editing this code.
