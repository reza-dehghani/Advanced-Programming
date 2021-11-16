/* به نام خدا // رضا دهقانی // تمرین 4 از فصل 4 // اجرا شد */
#include <iostream>
#include <string>
using namespace std;

int palindrome (string str, int i, int j)
{
	if ( i >= j ) return 1;
	return str[i] != str[j] ? 0 : palindrome (str, i+1, j-1); 
}

int main(void){
	string str;
	bool value;
	cout<<"Enter string and press enter (A to Z) \n";
	getline(cin,str);
	int n=str.size()-1;
	value=palindrome(str,0,n);
	if(value==1)
		cout<<"True";
	else if(value==0)
		cout<<"False";
	cout<<endl;
	system("pause");
}