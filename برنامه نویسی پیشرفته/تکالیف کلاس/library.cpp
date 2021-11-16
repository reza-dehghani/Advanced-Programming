// رضا دهقانی // اجرا شد // با تشکر
#include <iostream>
#include <conio.h>

using namespace std;

	struct book {
		char name[30];
		char auth[30];
		long int num;
	};
	book lib[100];
	int search(book,int nmb){
		int index = 0;
		int i=0;
    while (index < 100)
	{   if (lib[index].num == nmb)
		return index;
	index++;
    }
	return -1;
	}
	void main()
	{
		int start,i=0,end=0,find,j=0,info,del=-1,find2=0;
		while(end!=-1){
		cout<<"Welcome to the Library"<<endl<<"Please select an item"<<endl
			<<"1. Add New Book"<<endl
			<<"2. Delete a Book"<<endl
			<<"3. Search"<<endl
			<<"4. Print information of a Book"<<endl;
		cout<<"========================================="<<endl;
			cout<<"Your chice: ";
			cin>>start;
			cin.ignore();
		switch (start)
		{
		case 1:{
			if (i<99){
			cout<<"Enter name of book(max: 30 character): ";
			std::cin.getline (lib[i].name,30);
			cout << "Enter author of book(max: 30 character): ";
			std::cin.getline (lib[i].auth,30);

			cout<<"Enter number of book(max:9 number): ";
			cin>>lib[i].num;
			i++;
			}
			else
				cout<<"Library is full";
			break;}
		case 2:
			{
				system("cls");
				cout<<"Please Enter number of book"<<'\n';
				cin>>find2;
				del=search(lib[100],find2);
				if(del!=-1)
				{
					cout<<" if you sure for deleting cin two 0"<<endl;
					cin>>lib[del].name;
					cin>>lib[del].auth;
					lib[del].num=0;
					cout<<endl<<"Successfully deleted!";
				}
				else
					cout<<"The book wasn't found";
				break;
			}
		case 3:
			{
				system("cls");
			cout<<"Please Enter number of book: ";
			cin>>find;
			j=search(lib[100],find);
			cout<<endl;
			if(j!=-1)
				cout<<"This number is True and book in library, if you want see information of book go to 4";
			else
				cout<<"This book isn't in library";
			break;
			}
		case 4:
			{
				system("cls");
				cout<<"Please Enter number of book"<<endl;
				cin>>find;
				info=search(lib[100],find);
				if (info!=-1){
					cout<<"Name: "<<lib[info].name<<endl;
					cout<<"Author: "<<lib[info].auth<<endl;
					cout<<"Number: "<<lib[info].num<<endl;
				}
				else
					cout<<"Sorry this number isn't true";
			break;
			}
		default:{
			cout<<"Please select a number between 1-4";
			break;
				}
		}
		cout<<endl<<"Enter -1 to close program and enter 0 for go to start and enter a number from menu";
		cout<<endl<<"Your chice: ";
		cin>>end;
		system("cls");
		}
		system("pause");
}