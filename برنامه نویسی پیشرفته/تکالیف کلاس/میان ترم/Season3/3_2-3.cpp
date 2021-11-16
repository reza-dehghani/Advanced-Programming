//رضادهقانی // قسمت دوم برنامه ۳ از تمارین فصل ۳// اجرا شد

#include <iostream>
#include <conio.h>
#include <vector>
#include <ctime>

using namespace std;
void func1(vector <int>&adad,long int start,long int end)
{
	cout<<"OK!";
	int i=start,j=end-1;
		while(i<j){
    int temp = adad[i];  
    adad[i] = adad[j];
    adad[j] = temp;
	i++;
	j--;
}
}
void main ()
{
	clock_t time;
    time = clock();

	vector<int>bordar(1000000,1);
	long int a,adad,i,size;
	cout<<"Welcome,vector with numbers created"<<endl;
	size=bordar.size();
	for (int z=0;z<1000;z++){
	func1(bordar,0,size);
	}
	cout<<endl;
	time = clock() - time;
    cout << "It took me " << ((float)time)/CLOCKS_PER_SEC << " seconds"  << endl ;
	system("pause");
}