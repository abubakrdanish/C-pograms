#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string mn;
	int atp,at,ctp,ct,ch,ns,ad,sum,sumt;
	
	cout<<"Enter Movie Name: ";
	cin>>mn;
	cout<<"Enter Adult Ticket price: ";
	cin>>atp;
	cout<<"Enter Child Ticket price: ";
	cin>>ctp;
	cout<<"Enter Number of Adult Ticket sold: ";
	cin>>at;
	cout<<"Enter Number of Child Ticket sold: ";
	cin>>ct;
	cout<<"Enter percentage of the amount donated to the charity: ";
	cin>>ch;
	
	sum=(atp*at)+(ctp*ct);
	sumt=at+ct;
	ad=sum*(ch*0.01);
	ns=sum-ad;
	
	
	cout<<"Movie Name:........................ "<<mn<<endl;
	cout<<"Number of Tickets Sold:............ "<<sumt<<endl;
	cout<<"Gross Amount:...................... $"<<sum<<endl;
	cout<<"Percentage of Gross Amount Donated: "<<ch<<".00%"<<endl;
	cout<<"Amount Donated:.................... $"<<ad<<endl;
	cout<<"Net Sale:.......................... $"<<ns<<endl;
}                                                              
