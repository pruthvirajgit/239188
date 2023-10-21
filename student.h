#include <iostream>
#include <fstream>
using namespace std;

class Student{
	int studid;
	string name;
	int marks[3]
	
	Student(){
		
	}
	Student(int studid,string name,int[] arr){
		this->studid=studid;
		this->name=name;
		for(int i=0;i<3;i++){
			marks[i] = arr[i];
		}
	}
	
	int getid(){
		
	}
	void setid(int a){
		
	}
	
	int getname(){
		
	}
	void setname(string a){
		
	}
	
	int* getmarks(){
		return marks;
	}
	
	void setmarks(int[] a){
		for(int i=0;i<3;i++){
			marks[i] = a[i];
		}
	}
	
	
	
	int total(){
		int result=0;
		for(int i=0;i<3;i++){
			result = result+marks[i];
		}
	}
	
	double percenage(){
		double percent=0.0;
		int result = total();
		percent = result/3;
		return percent;
		
	}
	
};
