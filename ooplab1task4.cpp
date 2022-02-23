#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct menuitem
{
	string menulist;
	double price;
	
};
menuitem menu[8];
void getdata();
void showdata();
void selectItems();
void cal();
int c[8]={0,0,0,0,0,0,0,0};
int main(){
	double x;
	getdata();
	showdata();
	selectItems();
	cal();
	return 0;
}
void  getdata(){
	menu[1].menulist = "Plain Egg";
	menu[1].price = 1.45;
	menu[2].menulist = "Bacon and Egg";
	menu[2].price = 2.45;
	menu[3].menulist = "Muffin";
	menu[3].price = 0.99;
	menu[4].menulist = "French Toast";
	menu[4].price = 1.99;
	menu[5].menulist = "Fruit Basket";
	menu[5].price = 2.49;
	menu[6].menulist = "Cereal";
	menu[6].price = 0.69;
	menu[7].menulist = "Coffee";
	menu[7].price = 0.50;
	menu[8].menulist = "Tea";
	menu[8].price = 0.75;
	
	
}
void showdata(){
	cout<<"Welcomme to Johnny's Restaurant";
	cout<<1<<"\t"<<menu[1].menulist<<" $"<<menu[1].price<<endl;
	cout<<2<<"\t"<<menu[2].menulist<<" $"<<menu[2].price<<endl;
	cout<<3<<"\t"<<menu[3].menulist<<" $"<<menu[3].price<<endl;
	cout<<4<<"\t"<<menu[4].menulist<<" $"<<menu[4].price<<endl;
	cout<<5<<"\t"<<menu[5].menulist<<" $"<<menu[5].price<<endl;
	cout<<6<<"\t"<<menu[6].menulist<<" $"<<menu[6].price<<endl;
	cout<<7<<"\t"<<menu[7].menulist<<" $"<<menu[7].price<<endl;
	cout<<8<<"\t"<<menu[8].menulist<<" $"<<menu[8].price<<endl;
	
}
void selectItems(){
	int ch,quantity;
	char con;
	while (con != 'n'){
		cout << "Enter your choice :";
              cin >> ch; 
              cout << "Enter the Quantity :";
              cin >> quantity;
              switch (ch)
              {
              case 1:
              {
                     c[1] = c[1] + quantity;
                     cout << "You have Selected :" << menu[1].menulist << endl;

                     break;
              }
              case 2:
              {
                     c[2] = c[2] + quantity;
                     cout << "You have Selected :" << menu[2].menulist << endl;

                     break;
              }
              case 3:
              {
                     c[3] = c[3] + quantity;
                     cout << "You have Selected :" << menu[3].menulist << endl;

                     break;
              }
              case 4:
              {
                     c[4] = c[4] + quantity;
                     cout << "You have Selected :" << menu[4].menulist << endl;

                     break;
              }
              case 5:
              {
                     c[5] = c[5] + quantity;
                     cout << "You have Selected :" << menu[5].menulist << endl;

                     break;
              }
              case 6:
              {
                     c[6] = c[6] + quantity;
                     cout << "You have Selected :" << menu[6].menulist << endl;

                     break;
              }
              case 7:
              {
                     c[7] = c[7] + quantity;
                     cout << "You have Selected :" << menu[7].menulist << endl;


                     break;
              }
              case 8:
              	{
              		c[8] = c[8] + quantity;
              		cout << "You have Selected :" << menu[8].menulist << endl;
              		
              		break;
				  }
              default:
                     cout << "invalid input" << endl;
              }
              cout << "to select more items (y/n)";
              cin >> con;


       } ;
       cout << endl;
	
}
void cal(){
	double total = 0, tax, due;
	int i;
	cout<<"Welcome to Jhonny's Restaurant"<<endl;
	for(i=1;i<8;i++){
		if(c[i]>0){
			cout<<c[i]<<"\t"<<menu[i].menulist<<"$"<<menu[i].price<<endl;
			total = total + (menu[i].price*c[i]);
			
		}
	}
	tax = total*0.17;
	due = total + tax;
	cout<<"          Tax"<<"\t"<<tax<<endl;
	cout<<endl;
	cout<<"Amount due    $"<<due<<endl;
	
}