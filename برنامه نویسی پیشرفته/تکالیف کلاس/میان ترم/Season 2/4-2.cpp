// تمرین 4 فصل 2 // رضا دهقانی // اجرا شد
#include <iostream>
#include <algorithm>
#include <vector>
#include <conio.h>
using namespace std;
	void most_Frequent(vector<int> arr,int n)
	{
	int i,j,grand=0,count=0;
	vector<int>rep(n,0);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(arr[i]==arr[j]){
		count++;
		}
		}
	rep[i]=count;
	count=0;
	}
	grand=rep[0];
	int big=arr[0];
	for(i=0;i<n;i++){
		if(rep[i]>grand){
			big=arr[i];
			j=rep[i];
		}
		else
			j=grand;
		}
	for(i=0;i<n;i++){
	if(j==rep[i])
		cout<<arr[i];
	}
	}
void main()
{
	int n;
	cout<<"Welcome Enter the numbers of numbers then enter numbs";
	cout<<'\n';
	cin>>n;
	vector<int>arr(n);
	int i,j;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<endl<<"The most frequent number is:";
	cout<<'\t';
	most_Frequent(arr,n);
	cout<<endl<<"Enter any key for Exit";
	_getch();
}