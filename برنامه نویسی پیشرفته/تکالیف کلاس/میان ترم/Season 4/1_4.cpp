//رضا دهقانی // تمرین ۱ از فصل ۴ // اجرا شد
#include <iostream>
 using namespace std;
 long int sigma(long int number){
	 long int digit,sum=0;
	 	 while (number!=0){
		 digit=number%10;
		 sum+=digit;
		 number/=10;
	 }
		 return sum;
 }
 int main(void){
	 long int number;
	 char con='y';
	 while (con!='n'){
	system("cls");
	 cout<<"Enter adad! (maximum:10 digit)\n";
	 cin>>number;
	 cout<<"Sum of numbers is:"<<sigma(number)<<"\n";
	 cout<<"if you want enter another press y and if not press n\n";
	 cin>>con;
	 }
	 system("cls");
	 system("pause");
 }