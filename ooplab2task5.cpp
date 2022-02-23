#include<iostream>
using namespace std;
int main(){
	int in,hr,tt;
	float sm=0;
	cout<<"Enter you income: ";
	cin>>in;
	cout<<"Enter hourly rate: ";
	cin>>hr;
	cout<<"Enter total consulting time: ";
	cin>>tt;
	if(in>25000){
		if(tt>20){
			tt=tt-20;
			sm=(tt/60)*0.7*hr;
		}
		else if(tt<=20){
			sm=0;
		}
	}
	if(in<=25000){
		if(tt>30){
			tt=tt-30;
			sm=(tt/60)*0.4*hr;
		
		
		}
	
	}
	cout<<"bill is "<<sm;
}