#include<iostream>
#include <conio.h>
#include<vector>

using namespace std;
void main() 
{
	int M=9 ,N=9,i,j,k=1,f=1;
	vector<vector<int> >table(M, vector<int>(N));
	for(i=0;i<9;i++){
		for(j=0; j<9;j++){
			table[i][j]+=k;
			k+=f;
		}
		k=i;
		k+=2;
		f++;
	}
	for (int i = 0; i < table.size(); i++) {
		for (int j = 0; j < table.size(); j++) {
			cout << table[i][j] << "  ";
		}
		cout << endl;
	}
	_getch();
}