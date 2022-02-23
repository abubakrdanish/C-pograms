#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float po,kg;
	cout<<"Enter  weight in kg: ";
	cin>>kg;
	po=kg*2.2;
	cout<<"The weight in pound is ";
	cout<<fixed<<setprecision(2)<<po;
}