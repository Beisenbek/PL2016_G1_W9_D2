#include <iostream>
#include "student.h"
#include <vector>

using namespace std;

vector<student> v;
//student v[100];

void print_menu(){
	printf("0 - print all values\n");
	printf("1 - print above some value\n");
	printf("2 - print in sorted order\n");
	printf("3 - exit\n");
}

void print_above_x(double x){
	for(int i = 0; i < v.size(); ++i){
       		if(v[i].gpa >= x){
       			cout << v[i].name << " " << v[i].sname << " " <<  v[i].gpa << endl;
        	}
       	}	
}

void sort_students(){
	for(int i = 0; i < v.size()-1; ++i){
		for(int j = i + 1; j < v.size(); ++j){
			if(v[i].gpa > v[j].gpa){
				swap(v[i],v[j]);
			}
		}
	}
}

int main(){

	int k;
	int n;
	student s;
	
        cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> s.name >>s.sname >>s.gpa;
		v.push_back(s);
	}

                     
	do{
		print_menu();
		cin >> k;
	 	if(k == 0){
	 		print_above_x(0);	
	 	}	
	 	else if(k == 1){
	 		// print above some value
	 		double x;
	 		cin >> x;
	 		print_above_x(x);	
	 	}else if(k == 2){      
	 		// print in sorted order
	 		sort_students();
	 		print_above_x(0);	
	 	}                               
	}while(k!=3);

	return 0;
}
