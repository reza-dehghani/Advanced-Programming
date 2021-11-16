//رضادهقانی // قسمت اول برنامه ۳ از تمارین فصل ۳// اجرا شد
#include <iostream>
#include <conio.h>
#include <vector>
#include <ctime>
 
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
}

int main()
{
    clock_t time;
    time = clock();

	vector<int>bordar(1000000,1);
	long int a,adad=0,i,size,j=1,z;
	cout<<"Welcome, vector with 1 million (from 1 to 1 million) created"<<endl;
	cout<<"===================================="<<endl;
	size=bordar.size();
	cout<<"Vector after change:"<<endl;
	for(z=0;z<1000;z++){
		func1(bordar,0,size);
		cout<<"yES";
	}
	cout<<endl;
    time = clock() - time;
    cout << "It tooks time " << ((float)time)/CLOCKS_PER_SEC << " seconds"  << endl ;
	system("pause");
}