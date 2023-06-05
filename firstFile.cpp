#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main(){
	
	// To create a file from ground up
	ofstream myFile("firstFile.txt");
	
	if(!myFile){
		cout<<"File not opened";
	}
	string name;
	int age;
	
	while(cin>>name>>age){
	
	myFile<<setw(5)<<right<<age<<setw(10)<<right<<name<<endl;
}
	myFile.close();
	// To read from file
	ifstream myFileO("firstFile.txt");
	
	if(!myFileO){
		cout<<"File not opened for input";
	}
	string line;
	while(getline(myFileO,line)){
	
	//myFileO>>age>>name;
	cout<<"the line is: "<<line<<endl;
				}
	myFile.close();
	myFileO.close();
	
//	cout<<"Name is: "<<name<<endl<<"Age is: "<<age;
//	
//	// To append record to already created file.
//	
//	ofstream myFile1("firstFile.txt", ios::app);
//	myFile<<setw(5)<<right<<10<<setw(10)<<right<<
	
	
}
