
#include <iostream>
#include <vector>
using namespace std;
long int summer (vector <int> a, int n);

int main(void){
	vector <int> a;
	long int num;
	int n;
	cout<<"Please Enter numbers after end Enter +\n";
	while (cin>>num)
		a.push_back(num);
	n=a.size();
	cout<<summer(a,n)<<"\n";
	system("pause");
}
long int summer (vector <int> a, int n)
{
	int i=0,res=0,previus=0;
	if(n==1)
		return a[0];
	if (n==2)
		return a[1];
	if(n%2==0)
		return summer(a,n-1);
	else if (n%2!=0){
		while(n>=0){
			previus = summer(a,n-2)*summer(a,n-1);
			n--;
			i++;
		}
			if(i%2==0)
			res+=previus;
			else if(i%2!=0)
				res-=previus;
		return res;
}
}