#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
	int marks[1000];
	string sn;
	int i;
	float avg,sum;
	cout<<"Enter student name: ";
	cin>>sn;
	cout<<"Enter student 5 test score ";
	for(i=1;i<=5;i++){
		cin>>marks[i];
		sum=sum+marks[i];
	}
	avg=sum/5;
	
	cout<<"Student name:"<<sn<<endl;
	cout<<"Test scores:";
	
	for(i=1;i<=5;i++){
		cout<<" "<<marks[i];
		
	}
	cout<<endl;
	cout<<"Average test score:"<<fixed<<setprecision(2)<<avg;
	
	
}