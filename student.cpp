#include <iostream>
#include <fstream>
using namespace std;

class Student{
	int studid;
	string name;
	int m1,m2,m3;
	
	Student(){
		
	}
	Student(int studid,string name,int m1,int m2,int m3){
		this->studid=studid;
		this->name=name;
		this->m1=m1;
		this->m2=m2;
		this->m3=m3;
	}
	
	int getid(){
	}
	int total(){
	}
	int percenage(){
	}
	
};
