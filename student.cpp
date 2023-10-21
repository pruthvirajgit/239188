#include <iostream>
#include <fstream>
#include "student.h"
using namespace std;

int main(){
	
	int marks1[] = {80,90,85};
	int marks2[] = {90,90,95};
	Student s1(101,"raj",marks1);
	Student s1(101,"raj",marks2);
	
	cout>>"Total of s1:">>s1.total();
	cout>>"Total of s2:">>s2.total();
	
	cout>>"Percent of s1:">>s1.percentage();
	cout>>"Percent of s2:">>s2.percentage();
}
