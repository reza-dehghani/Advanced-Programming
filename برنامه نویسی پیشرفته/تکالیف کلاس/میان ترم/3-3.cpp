// تمرین 3-2 // رضا دهقانی // اجرا شد
#include <iostream>
#include <algorithm>
#include <vector>
#include <conio.h>

using namespace std; 

int most_Frequent(vector<int> arr, int n) 
{ 
	// Sort the array 
	sort(arr.begin(),arr.begin()+n);

	// find the max frequency using linear traversal 
	int max_count = 1, res = arr[0], curr_count = 1; 
	for (int i = 1; i < n; i++) { 
		if (arr[i] == arr[i - 1]) 
			curr_count++; 
		else { 
			if (curr_count > max_count) { 
				max_count = curr_count; 
				res = arr[i - 1]; 
			} 
			curr_count = 1; 
		} 
	} 

	// If last element is most frequent 
	if (curr_count > max_count) 
	{ 
		max_count = curr_count; 
		res = arr[n - 1]; 
	} 

	return res; 
} 

// driver program 
int main() 
{ 
	cout<<"Welcome Please Enter number of integers & then enter and cin nums";
	int m;
	cin>>m;
	vector <int> arr(m);
	for(int i=1;i<m;i++)
		cin>>arr[i];
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << most_Frequent(arr, n); 
	_getch();
} 
