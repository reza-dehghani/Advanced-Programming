/* به نام خدا // رضا دهقانی // تمرین 3 از فصل 4 // اجرا شد */
#include <iostream>
#include <vector>
using namespace std;

long int positive (vector <int> numbers){
	long int sum=0;
	for(long int i=0;i<numbers.size();i++){
	if(numbers[i]<0)
		sum+=0;
	else if(numbers[i]>=0){
		cout<<numbers[i];
		if(i!=numbers.size()-1)
		cout<<"\t+\t";
		sum+=numbers[i];
	}
	}
	return sum;
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