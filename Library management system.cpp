#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Library{
	public:
	int id;
	char name[100];
	char author[100];
	char student[100];
	int price;
	int pages;
	
	
};
int main(){
	Library lib[20];
	int input=0;
	int count=0;
	cout << "\t\t\t\t+-----------------------------------------+" << endl;
    cout << "\t\t\t\t¦        LIBRARY MANAGEMENT SYSTEM         ¦" << endl;
    cout << "\t\t\t\t+------------------------------------------+" << endl;
    cout<<endl;
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	while(input!=3){
	 
	cout<<endl;
		cout<< "\t\t\t\t---------------------------------------"<<endl;
		cout<<"\t\t\t\t|      Please 1 to input details       |"<<endl;
		cout<<"\t\t\t\t|      Enter 2 to display details      |"<<endl;
		cout<<"\t\t\t\t|      Enter 3 to quit                 | "<<endl;
		cout<<"\t\t\t\t ---------------------------------------"<<endl;
		cin>>input;
		
		switch(input)
		{
			start:
			case 1:
				
				cout<<endl;
			
				cout<<"Enter Book Id :";
				cin>>lib[count].id;
				cout<<endl;
				
				cout<<"Enter Book Name :";
				cin>>lib[count].name;
				cout<<endl;
				
				cout<<"Enter Book Author :";
		     	cin>>lib[count].author;
				cout<<endl;
				
				cout<<"Enter Student Name :";
				cin>>lib[count].student;
				cout<<endl;
				
				cout<<"Enter Book Price :";
				cin>>lib[count].price;
				cout<<endl;
				
				cout<<"Enter Book Pages :";
				cin>>lib[count].pages;
				cout<<endl;
		
				count++;
				
				break;
				
			case 2:
				{
			
				cout<<endl;
				
				for(int i=0;i<count;i++){
					cout<<"Book ID :"<<lib[i].id<<endl;
					cout<<"Book Name :"<<lib[i].name<<endl;
					cout<<"Book Author :"<<lib[i].author<<endl;
					cout<<"Student Name :"<<lib[i].student<<endl;
					cout<<"Book price:"<<lib[i].price<<endl;
					cout<<"Book pages :"<<lib[i].pages<<endl;
					cout<<"-----------------------------"<<endl;
					
				}
			
				}
				break;
				
			case 3:
			 exit(0);
			 break;
			 
			default:
			cout<<"You have entered wrong value, please type again"<<endl;
			goto start; 	
				
				
				
			
		}
		
	}
}
