#include <iostream>
#include <time.h> 
#include <iomanip>

using namespace std;
void main(){
	time_t start, end;
	time(&start);
    // unsync the I/O of C and C++. 
    ios_base::sync_with_stdio(false); 
	int arr[100000],i=0;
	while(i<100000){
		arr[i]=1;
		i++;
	}
	for(i=0;i<100000;i++){
	cout<<arr[i];
	}
	cout<<"\n";
	 time(&end);
	 double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
	system("pause");
}