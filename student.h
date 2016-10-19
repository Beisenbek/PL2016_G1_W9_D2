#include <vector>

using namespace std;

struct student{
	string id;
	string name;
	string sname;
	double gpa;
};

string  shorten(string s){
	if(s.length() < 10) return s;
	return s.substr(0,3) + "..." + s.substr(s.size()-3,3);
}

void printLine(){
	for(int i = 0; i < 50; ++i){
		cout << "_";
	}
	cout <<endl;
}

void print_above_x(vector<student> v,double x){
	printLine();

	for(int i = 0; i < v.size(); ++i){
       		if(v[i].gpa >= x){
       			printf("%10s|%10s|%10s|%10.2f\n",
       				shorten(v[i].id).c_str(),
       				shorten(v[i].sname).c_str(),
       				shorten(v[i].name).c_str(),
       				v[i].gpa);
        	}
        	printLine();
    }	
}

void sort_students(vector<student> &v){
	for(int i = 0; i < v.size()-1; ++i){
		for(int j = i + 1; j < v.size(); ++j){
			if(v[i].gpa > v[j].gpa){
				swap(v[i],v[j]);
			}
		}
	}
}

void print_info_for_id(vector<student> v, string id){
	for(int i = 0; i < v.size(); ++i){
       		if(v[i].id == id){
				cout << v[i].id << " " << v[i].name << " " << v[i].sname << " " << v[i].gpa << endl;        			
        	}
        	printLine();
    }
}
