#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
//	ifstream// read or input data from file
//	ofstream// to output data to file

  ofstream tempFile("myfile11.txt",ios::out);
  
  if(!tempFile){
  	cout<<"file not created";
  	//exit(0);
  	return 0;
  }
     string name;
     int age;
     while(cin>>name>>age)
		tempFile<<setw(5)<<left<<age<<setw(10)<<right<<name<<endl;
	
	
	tempFile.close();
	
	  ifstream tempFilei("myfile11.txt",ios::in);
	  
			if(!tempFilei){
			  	cout<<"file not created";
			  	//exit(0);
			  	return 0;
			  }
	 
	 while(tempFilei>>age>>name)
	 	cout<<"name is: "<<name<<"age is: "<<age<<endl;
	 	
	tempFilei.close();
	
  
  
}
