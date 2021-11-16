/* به نام خدا // رضا دهقانی // تمرین 2 از فصل 4 // اجرا شد */
#include <iostream>
using namespace std;
long int inverse (long int num,int n);
int main(void){
	long int num,amount;
	int n=0;
	cout<<"Please Enter number (max:8 digit) \n";
	cin>>num;
	amount=num;
	while(amount!=0){
		n++;
		amount/=10;
	}
	cout<<inverse(num,n)<<endl;
	system("pause");
}
long int inverse(long int num, int n){
	int digit,age=1,m;
	if (num<=0)
		return 0;
	else if(num>0){
		m=n-1;
		while(m>0){
		age*=10;
		m--;
		}
		digit=num%10;
		num/=10;
		return digit*age + inverse(num,n-1);
}
}