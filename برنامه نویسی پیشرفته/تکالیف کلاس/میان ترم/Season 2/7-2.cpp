// تمرین 7-2 // رضا دهقانی // اجرا شد
#include<iostream>
#include<vector>
using namespace std;
void main() {
	vector<vector<int> >vec{{2,4,3},{4},{6,9} };
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j] << "  ";
		}
		cout << endl;
	}
}