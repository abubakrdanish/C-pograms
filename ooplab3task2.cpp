#include<iostream>
#include<cstring>

using namespace std;



class employee{
	public:
	char* fname[20];
	string lname;
	double msalary;

void inputdata(){
	cout<<"Enter First name: ";
	getw(*fname);
	cout<<"Enter Last name: ";
	cin>> lname;
	cout<<"Monthly Salary: ";
	cin>>msalary;
	
	if(msalary<=0){
		msalary =0;
	}

	
	
}
void displaydata(){
	cout<<"First name "<<fname<<endl;
	cout<<"Last name "<<lname<<endl;
	cout<<"Monthly salary "<<msalary<<endl;
}

};



int main(){
	
	employee x,y;
	x.inputdata();
	x.displaydata();
	y.inputdata();
	y.displaydata();
	cout<<"Salary after Monthly increase is: "<<endl;
	x.msalary*=1.1;
	y.msalary*=1.1;

	x.displaydata();
	
	y.displaydata();
	
}