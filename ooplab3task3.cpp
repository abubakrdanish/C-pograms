#include<iostream>

using namespace std;

class invoice{
	private:
	string partnum;
	string partdes;
	int quant;

	
	float pri;
	public:
	void getpartnum(){
		cout<<"Enter Part number: ";
		cin>>partnum;
		
	}
	void getpartdes(){
		cout<<"Enter Part desciption: ";
		cin>>partdes;
		
	}
	void getquant(){
		cout<<"Enter Quantity bought: ";
		cin>>quant;
	
		if(quant<0){
			quant=0;
		}
	}
	void getpri(){
		cout<<"Enter Price: ";
		cin>>pri;
		
		if(pri<0){
			pri=0;
		}
	}
	void getInvoiceAmount(){
		int tprice;
		tprice=pri*quant;
		cout<<"Total price is "<<tprice<<endl;
	}
};
int main(){
	invoice inc;
	inc.getpartdes();
	inc.getpartnum();
	inc.getpri();
	inc.getquant();
	inc.getInvoiceAmount();
	
	
}