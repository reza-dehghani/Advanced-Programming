/* به نام خدا // رضا دهقانی // تمرین 3 از فصل 4 // اجرا شد */
#include <iostream>
#include <vector>
using namespace std;

long int positive (vector <int> numbers){
	long int sum=0;
	if(numbers.size()==0)
		return sum+=0;
	else if(numbers.size()>=0){
		if(numbers[0]>=0){
		cout<<numbers[0];
		cout<<"\t+\t";
		sum+=numbers[0];
		}
		numbers.erase(numbers.begin());
		return sum + positive(numbers);
}
}

int main(void){
	vector <int> numbers;
	long int n;
	cout<<"Enter numbers when end Enter . \n";
	while(cin>>n){
		numbers.push_back(n);
	}
	cout<<endl<<"{";
	cout<<"}\n Sum of the numbers is:\t"<<positive(numbers)<<endl;
	system("pause");
}