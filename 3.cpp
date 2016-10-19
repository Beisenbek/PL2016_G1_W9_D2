#include <iostream>
#include "student.h"
#include <vector>

using namespace std;

void print_menu(){
	printf("0 - print all values\n");
	printf("1 - print above some value\n");
	printf("2 - print in sorted order\n");
	printf("3 - print info for student with id\n");
	printf("4 - exit\n");
}

int main(){

	freopen("input.txt","r",stdin);

	int k;
	int n;
	student s;
	vector<student> v;

    cin >> n;

	for(int i = 0; i < n; ++i){
		cin >>s.id >> s.name >>s.sname >>s.gpa;
		v.push_back(s);
	}

	do{
		print_menu();
		cin >> k;
	 	if(k == 0){
	 		print_above_x(v,0);	
	 	}	
	 	else if(k == 1){
	 		// print above some value
	 		double x;
	 		cin >> x;
	 		print_above_x(v,x);	
	 	}else if(k == 2){      
	 		// print in sorted order
	 		sort_students(v);
	 		print_above_x(v,0);	
	 	}
	 	else if(k == 3){      
	 		// print info for student with id
	 		string id;
	 		cin >> id;
	 		print_info_for_id(v,id);	
	 	}                                
	}while(k!=4);

	return 0;
}
