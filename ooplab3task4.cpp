#include<iostream>

using namespace std;

class Coffee{
	private:
		int numb;
		public:
			float tcost,x;
			int a,b,c;
	         void inputdata(){
	         	cout<<"Enter Number of Bags: ";
	         	cin>>numb;
	         	 a=numb/20;
	         	 x=numb-(a*20);
			     b=x/10;
			     x=0;
			     x=numb-(b*10)-(a*20);
			     x=x/5;
			     if(x<1){
			     	c=1;
				 }
				 if(x>=1){
				 	c=2;
				 }
			     tcost=(a*1.80)+(b*1.00)+(c*0.60)+(numb*5.50);
			 }
			
			 void displaydata(){
			 	cout<<"Number of Bags Ordered "<<numb<<endl<<"The cost of Order:$ "<<(numb*5.5)<<endl;
			 	cout<<"Boxes Used"<<endl<<a<<" Large - $"<<(a*1.8)<<endl;
			 	cout<<b<<" Medium - $"<<(b*1)<<endl;
			 	cout<<c<<" Large - $"<<(c*0.6)<<endl;
			 	cout<<"Your Total Cost is: $"<<tcost<<endl;
			 }
};
int main(){
	Coffee cf;
	cf.inputdata();
	cf.displaydata();
}