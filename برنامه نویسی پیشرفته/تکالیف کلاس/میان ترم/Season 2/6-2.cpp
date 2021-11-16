// تمرین 6-2 // رضا دهقانی // اجرا شد

#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<vector<int> > vec; 

	int num = 13; 

	for (int i = 0; i < 2; i++) { 
		vector<int> v1; 

		for (int j = 0; j < 3; j++) { 
			v1.push_back(num);  
		} 

		vec.push_back(v1); 
	} 

	for (int i = 0; i < vec.size(); i++) { 
		for (int j = 0; j < vec[i].size(); j++) 
			cout << vec[i][j] << " "; 
		cout << endl; 
	}  
	system("pause");
} 
