// رضا دهقانی // سوال 1 از تمارین فصل 3 // اجرا شد
#include <iostream>
#include <conio.h>
#include <vector>
 
using namespace std;
void func1(vector <int>adad,int start, int end)
{
	int i=start,j=end-1;
		while(i<j){
    int temp = adad[i];  
    adad[i] = adad[j];
    adad[j] = temp;
	i++;
	j--;
		}
	for(int i=0;i<adad.size();i++)
		cout<<adad[i]<<"\t";
	cout<<endl;
}
void print(vector<int>bordar){
	for(int i=0;i<bordar.size();i++)
		cout<<bordar[i]<<"\t";
	cout<<endl;
}
void main ()
{
	vector<int>bordar;
	int a,adad,i,size;
	cout<<"Welcome, Please enter number and after end enter -1"<<endl;
	while(1){
		cin>>adad;
		if(adad==-1)
			break;
		bordar.push_back(adad);
	}
	cout<<"===================================="<<endl;
	cout<<"Vector before change:"<<endl;
	print(bordar);
	size=bordar.size();
	cout<<"Vector after change:"<<endl;
	func1(bordar,0,size);
	cout<<endl;
	system("pause");
}