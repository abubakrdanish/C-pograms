#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
int p = 40;
int q = 48;
int r = 43;
class car
{
	public:
		int serial;
		string engcc;
		string make;
		string model;
		string colour;
		string variant;
		virtual void show() = 0;
		virtual void choose() = 0;
		virtual void add() = 0;		
		car()
		{
			serial = 1;
			engcc = "999cc";
			make = "ABC";
			model = "XYZ";
			colour = "WHITE";
			variant = "STANDARD";
		}
		car(int serial, string engcc, string make, string model, string variant, string colour)
		{
			this->serial = serial;
			this->engcc = engcc;
			this->make = make;
			this->model = model;
			this->variant = variant;
			this->colour = colour;
		}
		~car()
		{	
		}
};
class customer
{
	private:
	    string cnic;
	    string contact;
	    string address;
	    double payment;
	public:
		string fn;
		string ln;
		customer()
		{
			cnic = "9999999999999";
			contact = "11111111111";
			address = "abc xyz";
			payment = 0;
			fn = "abc";
			ln = "xyz";
		}
		customer(string cnic, string contact, string address, double payment, string fn, string ln)
		{
			this->cnic = cnic;
			this->contact = contact;
			this->address = address;
			this->payment = payment;
			this->fn = fn;
			this->ln = ln;			
		}
		~customer()
		{
			
		}
		void setcontact(string contact)
		{
			this->contact=contact;
		}
		string getcontact()
		{
			return contact;
		}
		void setaddress(string address)
		{
			this->address=address;
		}
		string getaddress()
		{
			return address;
		}
		void setcnic(string cnic)
		{
			this->cnic=cnic;
		}
		string getcnic()
		{
			return cnic;
		}
		void getinfo()
		{
			cout<<"Enter your first name: ";
			cin>>fn;
			cout<<"Enter your last name: ";
			cin>>ln;
			cout<<"Enter your CNIC number: ";
			cin>>cnic;
			if(cnic.length()>13||cnic.length()<13){
				cout<<"Enter Correct CNIC number"<<endl;
				cin>>cnic;
			}
			cout<<"Enter your contact info: ";
			cin>>contact;
			if (contact.length()>11||contact.length()<11){
				cout<<"Enter correct CONTACT number ";
				cin>>contact;
			}
			fflush(stdin);
			cout<<"Enter your adress: ";
			getline(cin,address);
		}
		void displayinfo()
		{
			cout<<"\t\t\t"<<"First Name: "<<fn<<endl;
			cout<<"\t\t\t"<<"Last Name: "<<ln<<endl;
			cout<<"\t\t\t"<<"CNIC Number: "<<cnic<<endl;
			cout<<"\t\t\t"<<"Contact Information: "<<contact<<endl;
			cout<<"\t\t\t"<<"Address: "<<address<<endl<<endl;			
		}
};
class accounts
{
	private:
		double earnings;
		double spendings;
		double prof_loss;
	public:
		int ncs, ucs, cor;
		void setearnings(double earnings)
		{
			this->earnings += earnings;
		}
		void setspendings(double spendings)
		{
			this->spendings += spendings;
		}
		void setprof_loss(double prof_loss)
		{
			this->prof_loss += prof_loss;
		}		
		double getearnings()
		{
			return earnings;
		}
		double getspendings()
		{
			return spendings;
		}
		double getprof_loss()
		{
			return prof_loss;
		}
		accounts()
		{
			earnings = 0;
			spendings = 0;
			prof_loss = 0;
			ncs = 0;
			ucs = 0;
			cor = 0;
		}
		accounts(double earnings, double spendings, double prof_loss, int ncs, int ucs, int cor)
		{
			this->earnings = earnings;
			this->spendings = spendings;
			this->prof_loss = prof_loss;
			this->ncs = ncs;
			this->ucs = ucs;
			this->cor = cor;			
		}
		void showcount()
		{
			ifstream ob1("newcount.txt",ios::in);
			if(!ob1)
			{
				cout<<"newcount.txt could not be opened."<<endl;
			}
			while(!ob1.eof())
			{
				ob1 >> ncs;
			}
			cout<<"\nNumber of New Cars Sold Till Now: "<<ncs<<endl;
			ob1.close();
			ifstream ob2("usedcount.txt",ios::in);
			if(!ob2)
			{
				cout<<"usedcount.txt could not be opened."<<endl;
			}
			while(!ob2.eof())
			{
				ob2 >> ucs;
			}
			cout<<"\nNumber of Used Cars Sold Till Now: "<<ucs<<endl;
			ob2.close();
			ifstream ob3("rentcount.txt",ios::in);
			if(!ob3)
			{
				cout<<"rentcount.txt could not be opened."<<endl;
			}
			while(!ob3.eof())
			{
				ob3 >> cor;
			}
			cout<<"\nNumber of Rent Cars Sold Till Now: "<<cor<<endl;
			ob3.close();			
		}
		void displaynew()
		{
			ifstream dn("newcarsold.txt", ios::in);
			if(!dn)
			{
				cout<<"newcarsold.txt could not be opened."<<endl;
			}
			string line1, line2, line3;
			while(!dn.eof())
			{
				cout<<"\nCustomer Information: "<<endl;
				getline(dn, line1);
				cout<<line1<<endl;
				cout<<"\nAddress: "<<endl;
				getline(dn, line2);
				cout<<line2<<endl;
				cout<<"\nNew Car Information: "<<endl;
				getline(dn, line3);
				cout<<line3<<endl;				
			}
			dn.close();
		}
		void displayused()
		{
			ifstream du("usedcarssold.txt", ios::in);
			if(!du)
			{
				cout<<"usedcarssold.txt could not be opened."<<endl;
			}
			string line1, line2, line3;
			while(!du.eof())
			{
				cout<<"\nCustomer Information: "<<endl;
				getline(du, line1);
				cout<<line1<<endl;
				cout<<"\nAddress: "<<endl;
				getline(du, line2);
				cout<<line2<<endl;
				cout<<"\nUsed Car Information: "<<endl;
				getline(du, line3);
				cout<<line3<<endl;				
			}
			du.close();			
		}
		void displayrent()
		{
			ifstream dr("inforent.txt", ios::in);
			if(!dr)
			{
				cout<<"inforent.txt could not be opened."<<endl;
			}
			string line1, line2, line3;
			while(!dr.eof())
			{
				cout<<"\nCustomer Information: "<<endl;
				getline(dr, line1);
				cout<<line1<<endl;
				cout<<"\nAddress: "<<endl;
				getline(dr, line2);
				cout<<line2<<endl;				
				cout<<"\nRented Car Information: "<<endl;
				getline(dr, line3);
				cout<<line3<<endl;								
			}
			dr.close();			
		}
		void displaypl()
		{
			ifstream e("earning.txt", ios::in);
			if(!e)
			{
				cout<<"earning.txt could not be opened"<<endl;
			}
			double num1;
			e>>num1;
			cout<<"\nEarnings: PKR "<<fixed<<setprecision(0)<<num1<<endl;
			e.close();
			ifstream s("spending.txt", ios::in);
			if(!s)
			{
				cout<<"spending.txt could not be opened"<<endl;
			}
			double num2;
			s>>num2;
			cout<<"\nSpendings: PKR "<<fixed<<setprecision(0)<<num2<<endl;
			s.close();			
	    }
	    void displaymaintfile()
	    {
	    	ifstream m("maintain.txt", ios::in);
	    	if(!m)
	    	{
	    		cout<<"maintain.txt could not be opened"<<endl;
			}
			string line;
			while(!m.eof())
			{
				getline(m,line);
				cout<<line<<endl;
			}
			m.close();
		}
		~accounts()
		{
		}
};
class newcars : protected car
{
	public:
		static int i;
		double own, dp, installments, tprice;
		double price;
		double tax;
		int deltime;
		customer ob1;
		accounts ob2;
		newcars() : car()
		{
			price = 9999;
			own = 0;
			tax = 99;
		    deltime = 6;
		    dp = 0;
		    installments = 0;
		    tprice = 9999;
		}
		newcars(int price, int own, int tax, int deltime, double dp, double installments, double tprice, int serial, string engcc, string make, string model, string variant, string colour) : car(serial,engcc,make, model,variant,colour)
		{
			this->price = price;
			this->own = own;
			this->tax = tax;
			this->deltime = deltime;
			this->dp = dp;
			this->installments = installments;
			this->tprice = tprice;						
		}
		void show()
		{
			ifstream newcars("newcars.txt", ios::in);
			if(!newcars)
			{
				cout<<"newcars.txt can't be opened."<<endl;
				exit(1);
			}
	        cout << "\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(21) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Price" << endl;
	        cout << "\n";
	        cout << "=======================================================================================================================\n" << endl;
			while ( !newcars.eof() )
			{
				newcars >> serial >> make >> model >> variant >> engcc >> price;
				cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(19) << variant << setw(14) << engcc << setw(12) << "PKR " << price << setw(13) << endl;
				cout << "_______________________________________________________________________________________________________________________\n" << endl;	        		
            }
			newcars.close();			
		}
		void choose()
		{
			int opt;
			cout<<"Select car of your choice: ";
			cin>>opt;
			while(opt < 1 || opt > p)
			{
				cout<<"Select appropriate number: ";
				cin>>opt;
			}
			ifstream newcars("newcars.txt", ios::in);
			if(!newcars)
			{
				cout<<"newcars.txt couldn't be opened."<<endl;
				exit(1);
			}
			cout << "\nCar Choosen: " << endl;
	        cout << "\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(21) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Price" << endl;
	        cout << "\n";
	        cout << "=======================================================================================================================\n" << endl;			
			while ( !newcars.eof() )
			{
				newcars >> serial >> make >> model >> variant >> engcc >> price;
				if(opt == serial)
				{
					cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(19) << variant << setw(14) << engcc << setw(12) << "PKR " << price << setw(13) << endl;
					cout << "_______________________________________________________________________________________________________________________\n" << endl;	        							
					char ans1;
					cout<<"\nDo you want your car to be delivered immediately(Y/N): ";
					cin>>ans1;
					while(ans1 != 'Y' && ans1 != 'N')
					{
						cout<<"\nInvalid character entered."<<endl;
					    cout<<"Do you want your car to be delivered immediately(Y/N): ";
					    cin>>ans1;				
					}
					if(ans1 == 'Y')
					{
						own = price * 0.1;
						tprice += own;
						cout<<"\nOkay, you will have to pay own on this car which is PKR "<<own<<endl;
					}
					else if(ans1 == 'N')
					{
						own = 0;
						tprice += own;
						cout<<"\nOkay, there will be no own charges and your car will be delivered in 6 months"<<endl;
					}
					char ans2;
					cout<<"\nDo you want your car on full payment or on an installment plan(F/I): ";
					cin>>ans2;
					while(ans2 != 'F' && ans2 != 'I')
					{
						cout<<"\nInvalid character entered."<<endl;
					    cout<<"Do you want your car on full payment or on an installment plan(F/I): ";
					    cin>>ans2;				
					}
					if(ans2 == 'F')
					{
						tax = price * 0.10;
						tprice += tax + price;
						cout<<"\nOkay, ex-factory price of this car is PKR "<<price<<endl;
						cout<<"\nThe tax on this car will be PKR "<<tax<<endl;
					}
					else if(ans2 == 'I')
					{
						dp = price*0.25;
						installments = (price*0.80)/36;
						tax = price * 0.10;
						tprice += dp + installments + tax + price;		
						cout<<"\nOkay, there will a 36 months installment plan. Please pay 25 percent down payment which will be PKR "<<dp<<endl;
						cout<<"\nThe monthly payment will be PKR "<<installments<<endl;
						cout<<"\nThe tax on this car will be PKR "<<tax<<endl;
					}
					cout<<"Now please enter your personal information.\n";
					ob1.getinfo();
					ofstream ncs("newcarsold.txt",ios::app);
					if(!ncs)
					{
						cout<<"newcarsold.txt could not opened/created."<<endl;
					}
					ncs << ob1.fn << " " << ob1.ln << " " << ob1.getcnic() << " " << ob1.getcontact() <<endl;
					ncs << ob1.getaddress() <<endl;
					ncs << make << " " << model << " " << variant << " " << engcc << " " << price <<endl;
					ncs.close();
					cout<<"Car Billing Info\n"<<endl;
					ob1.displayinfo();
					cout<<"\nMake: "<<make<<endl;
					cout<<"\nModel: "<<model<<endl;
					cout<<"\nVariant: "<<variant<<endl;
					cout<<"\nEngine CC: "<<engcc<<endl;
					cout<<"\nFactory-Price: "<<price<<endl;
					cout<<"\nOwn: "<<own<<endl;
					cout<<"\nDown Payment: "<<dp<<endl;
					cout<<"\nMonthly Installment: "<<installments<<endl;
					cout<<"\nTax: "<<tax<<endl;
					cout<<"\nOn-Road Price: "<<tprice<<endl;
					ob2.setearnings(tprice);
					double num;
                    ifstream earn("earning.txt",ios::in);
                    if(!earn)
                    {
                    	cout<<"earning.txt could not be opened"<<endl;
					}
					earn>>num;
					earn.close();
					num += tprice;
					ofstream earn2("earning.txt",ios::out);
                    if(!earn2)
                    {
                    	cout<<"earning.txt could not be opened"<<endl;
					}
					earn2<<fixed<<num;
					earn2.close();					
					ifstream infile2( "newcount.txt", ios::in );
					infile2 >> i;
					infile2.close();
					ofstream outfile2( "newcount.txt", ios::out );
					outfile2 << ++i;
					outfile2.close();									
				}
            }
			newcars.close();						
		}
		void add()
		{
			int serial1;
			string make1, make2;
			string model1, model2;
			string variant1, variant2;
			string engcc1, engcc2;
			cout << "Provide information of your car\n";
			cout << "Enter make : ";
			cin >> make1;
			cout << "Enter model : ";
			cin >> model1;
			cout << "Enter variant : ";
			cin >> variant1;
			cout << "Enter Engine-CC : ";
			cin >> engcc1;
			double price1, price2;
			cout << "Enter price : ";
			cin >> price1;
			ifstream innewcars( "newcars.txt", ios::in );
			int temp;
			while( !innewcars.eof() )
			{
				innewcars >> serial1 >> make2 >> model2 >> variant2 >> engcc2 >> price2;
				temp = serial1;
			}
			ofstream outnewcars( "newcars.txt", ios::app );
			outnewcars << "\n" << fixed << setprecision(0) << ++temp << " " << make1 << " " << model1 << " " << variant1 << " " << engcc1 << " " << price1;
            p++;		
		}				
		~newcars()
		{
		}
};
int newcars::i = 0;
class usedcars : protected car
{
	private:
		string numplate;
	public:
		static int i;
		double price;
		int year;
		string condition;
		customer ob1;
		accounts ob2;
		usedcars() : car()
		{
			numplate = "XYZ-000";
			price = 0;
			year = 2022;
			condition = "10/10";
		}
		usedcars(string numplate, double price, int year, string condition, int serial, string engcc, string make, string model, string colour, string variant) : car(serial,engcc,make,model,colour,variant)
		{
			this->numplate = numplate;
			this->price = price;
			this->year = year;
			this->condition = condition;			
		}
		void setnumplate(string np)
		{
			numplate = np;
		}
		string getnumplate()
		{
			return numplate;
		}
		void show()
		{
			int index = 0;
		    double budget;
			ifstream inusedcars("usedcars.txt", ios::in);
			if (!inusedcars)
			{
				cout << "File could not be opened" << endl;
				exit(1);
			}
			cout << "Enter Your Price Range : PKR ";
	        cin >> budget;
	        cout << "\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(12) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Color" << setw(18) << "Number-Plate" << setw(14) << "Price" << setw(19) << "Condition" << endl;
	        cout << "\n";
	        cout << "=======================================================================================================================\n" << endl;
			while (!inusedcars.eof())
			{
				inusedcars >> serial >> make >> model >> variant >> year >> engcc >> colour >> numplate >> price >> condition;
	        	if ((budget <= price + 500000) && (budget >= price - 500000))
	        	{
	        		index=1;
				    cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << price << setw(13) << condition << endl;
					cout << "_______________________________________________________________________________________________________________________\n" << endl;	        		
				}
				else
				{
				}
            }
            inusedcars.close(); 
            if(index == 0)
            {
			    cout << "\nSorry, We Have No Cars In This Range." << endl;            	
			}
			else
			{
				choose();
			}
		}
		void choose()
		{
			int opt;
			cout << "\nEnter serial number of the car to be selected : ";
			cin >> opt;
			while(opt < 1 || opt > q)
			{
				cout<<"Select appropriate number: ";
				cin>>opt;
			}			
			int year;
			string numplate;
			int price;
			string condition;
			ifstream inusedcars("usedcars.txt", ios::in);
			if (!inusedcars)
			{
				cout << "File could not be opened" << endl;
				exit(1);
		    }
		    while (!inusedcars.eof())
			{
				inusedcars >> serial >> make >> model >> variant >> year >> engcc >> colour >> numplate >> price >> condition;
				if (serial == opt)
				{
					cout << "\n\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(12) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Color" << setw(18) << "Number-Plate" << setw(14) << "Price" << setw(19) << "Condition" << endl;
			        cout << "\n";
			        cout << "=======================================================================================================================\n" << endl;
					cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << price << setw(13) << condition << endl;
					cout << "\n";
				    cout << "=======================================================================================================================\n" << endl;
				}
			}
			inusedcars.close();
			char ans;
			cout << "Buy this car ( Y / N ) : ";
			cin >> ans;
			while(ans != 'Y' && ans != 'N')
			{
				cout << "Invalid Character Entered, Enter Again: ";
				cin >> ans;
			}
			if (ans == 'Y')
			{
				ifstream inusedcars( "usedcars.txt", ios::in );
				if (!inusedcars)
				{
					cout << "File could not be opened" << endl;
					exit(1);
			    }
				while (!inusedcars.eof())
				{
					inusedcars >> serial >> make >> model >> variant >> year >> engcc >> colour >> numplate >> price >> condition;
					if (serial == opt)
				    {
				    	cout << "Car Purchased: " << endl;
						cout << "\n\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(12) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Color" << setw(18) << "Number-Plate" << setw(14) << "Price" << setw(19) << "Condition" << endl;
				        cout << "\n";
				        cout << "=======================================================================================================================\n" << endl;
						cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << price << setw(13) << condition << endl;
						cout << "\n";
					    cout << "=======================================================================================================================\n" << endl;
		                cout << "Provide your information : " << endl;
		                ob1.getinfo();
						cout << "Please Pay PKR " << price << "." << endl;
						ob2.setearnings(price);
						double num;
	                    ifstream earn("earning.txt",ios::in);
	                    if(!earn)
	                    {
	                    	cout<<"earning.txt could not be opened"<<endl;
						}
						earn>>num;
						earn.close();
						num += price;
						ofstream earn2("earning.txt",ios::out);
	                    if(!earn2)
	                    {
	                    	cout<<"earning.txt could not be opened"<<endl;
						}
						earn2<<fixed<<num;
						earn2.close();					
						ofstream outinfo( "usedcarssold.txt", ios::app );
		                outinfo << ob1.fn << " " << ob1.ln << " " << ob1.getcnic() << " " << ob1.getcontact() << endl;
		                outinfo << ob1.getaddress() << endl;
		                outinfo << make << " " << model << " " << variant << " " << year << " " << engcc << " " << colour << " " << numplate << " " << price << endl;
		                outinfo.close();
					    ifstream infile1( "usedcount.txt", ios::in );
						infile1 >> i;
						infile1.close();
						ofstream outfile1( "usedcount.txt", ios::out );
						outfile1 << ++i;
						outfile1.close();
					}
		        }
			}
			else if (ans == 'N')
			{
				cout << "\n\n=======================================================================================================================\n" << endl;
				cout << "\n\n\t\t\t*****   We are offering you discount of PKR 50000 on this product !   *****\n\n" << endl;
                cout << "=======================================================================================================================\n" << endl;
				ifstream inusedcars("usedcars.txt", ios::in);
				if (!inusedcars)
				{
					cout << "File could not be opened" << endl;
					exit(1);
			    }
				while (!inusedcars.eof())
				{
					inusedcars >> serial >> make >> model >> variant >> year >> engcc >> colour >> numplate >> price >> condition;
					if (serial == opt)
				    {
			            cout << "Buy this car ( Y / N ) : ";
			            cin >> ans;
			            while(ans != 'Y' && ans != 'N')
			            {
				            cout << "Invalid Character Entered, Enter Again: ";
				            cin >> ans;
			            }			            
			            if(ans == 'Y')
			            {
			            	cout << "\nCar Purchased" << endl;
							cout << "\n\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(12) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Color" << setw(18) << "Number-Plate" << setw(14) << "Price" << setw(19) << "Condition" << endl;
					        cout << "\n";
					        cout << "=======================================================================================================================\n" << endl;
							cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << price - 50000 << setw(13) << condition << endl;
							cout << "\n";
						    cout << "=======================================================================================================================\n" << endl;			            	
						    cout << "Provide your information : " << endl;
						    ob1.getinfo();
							cout << "Please Pay PKR " << price - 50000 << "." << endl;
							ob2.setearnings(price-50000);
							double num;
		                    ifstream earn("earning.txt",ios::in);
		                    if(!earn)
		                    {
		                    	cout<<"earning.txt could not be opened"<<endl;
							}
							earn>>num;
							earn.close();
							num += (price-50000);
							ofstream earn2("earning.txt",ios::out);
		                    if(!earn2)
		                    {
		                    	cout<<"earning.txt could not be opened"<<endl;
							}
							earn2<<fixed<<num;
							earn2.close();												
							ofstream outinfo( "usedcarssold.txt", ios::app );
		                    outinfo << ob1.fn << " " << ob1.ln << " " << ob1.getcnic() << " " << ob1.getcontact() << endl;
		                    outinfo << ob1.getaddress() << endl;
		                    outinfo << make << " " << model << " " << variant << " " << year << " " << engcc << " " << colour << " " << numplate << " " << price << endl;
						    ifstream infile( "usedcount.txt", ios::in );
							infile >> i;
							infile.close();
							ofstream outfile( "usedcount.txt", ios::out );
							outfile << ++i;
							outfile.close();
						}
						else if(ans == 'N')
						{
							cout << "Okay, thankyou." << endl;
							break;
						}
		            }
		        }
		        inusedcars.close();
			}
		}
		void add()
		{
			string color;
			string make1;
			string model1;
			string variant1;
			int year1;
			string engcc1;
			string numplate1;
			cout << "Provide information of your car\n";
			cout << "Enter make : ";
			cin >> make1;
			cout << "Enter model : ";
			cin >> model1;
			cout << "Enter variant : ";
			cin >> variant1;
			cout << "Enter year : ";
			cin >> year1;
			cout << "Enter Engine-CC : ";
			cin >> engcc1;
			cout << "Enter color : ";
			cin >> color;
			int flag = 0;
			while ( flag == 0 )
			{
				cout << "Enter number plate : ";
				cin >> numplate1;
				ifstream inusedcars( "usedcars.txt", ios::in );
				while ( !inusedcars.eof() )
				{
					inusedcars >> serial >> make >> model >> variant >> year >> engcc >> colour >> numplate >> price >> condition;
					if ( numplate1 == numplate )
					{
						cout << "Number Plate already exists" << endl;
						flag = 0;
						break;
					}
					else 
					{
						flag = 1;
					}
			    }
			    inusedcars.close();
			}
			int price1;
			cout << "Enter price : ";
			cin >> price1;
			ob2.setspendings(price1);
			double num;
            ifstream spend("spending.txt",ios::in);
            if(!spend)
            {
            	cout<<"spending.txt could not be opened"<<endl;
			}
			spend>>num;
			spend.close();
			num += price1;
			ofstream spend2("spending.txt",ios::out);
            if(!spend2)
            {
            	cout<<"spending.txt could not be opened"<<endl;
			}
			spend2<<fixed<<num;
			spend2.close();								
			cout << "Enter condition ( ? / 10 ) : ";
			cin >> condition;
			ofstream outusedcars( "usedcars.txt", ios::app );
			outusedcars << "\n" << fixed << ++serial << " " << make1 << " " << model1 << " " << variant1 << " " << year1 << " " << engcc1 << " " << color << " " << numplate1 << " " << price1 << " " << condition;
            q++;		
		}		
		~usedcars()
		{
			
		}	
};
int usedcars::i=0;
class rentcars : protected car
{
	private:
		string numplate;
	public:
		static int i;
	    int days;
	    double security;
	    double ppd;
	    double rent;
	    double total;
	    bool driver;
		int drivercost;
		customer obj;
		accounts ob2;
	    rentcars() : car()
	    {
	    	numplate = "ABC-999";
	    	days = 0;
	    	security = 0;
	    	ppd = 0;
	    	rent = 0;
	    	total = 0;
	    	driver = 1;
	    	drivercost = 0;
		}
		rentcars(string numplate, int days, double security, double ppd, double rent, double total, bool driver, int drivercost, int serial, string engcc, string make, string model, string colour, string variant) : car(serial,engcc,make,model,colour,variant)
		{
			this->numplate = numplate;
			this->days = days;
			this->security = security;
			this->ppd = ppd;
			this->rent = rent;
			this->total = total;
			this->driver = driver;
			this->drivercost = drivercost;			
		}
        void setnumplate(string numplate)
        {
        	this->numplate = numplate;
		}
		string getnumplate()
		{
			return numplate;
		}
		void show()
		{
			ifstream rentcars("rentcars.txt",ios::in);
			if(!rentcars)
			{
				cout<<"File Can't be open"; 
			    exit(1);
			}
			cout << "\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(12) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Color" << setw(18) << "Number-Plate" << setw(14) << "Rent" << setw(19) << endl;
		    cout << "\n";
		    cout << "=======================================================================================================================\n" << endl;	
			while(!rentcars.eof())
			{
				rentcars >> serial >> make >> model >> variant  >> engcc >> colour >> numplate >> rent ;        	
				cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << rent << setw(13) << endl;
				cout << "_________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;	        				
		    }
		    rentcars.close();
	    }
	    int ch;
	    
		void choose()
		{
			cout<<"Choose from the list above: ";
			cin>>ch;
			while(ch<1 || ch>r)
			{
				cout<<"ERROR! Enter Correct Serial Number: "<<endl;
				cin>>ch;
			}
			ifstream rentcars("rentcars.txt",ios::in);
			if(!rentcars)
			{
				cout<<"File Can't be open"; 
			    exit(1);
			}
			cout << "\nSerial" << setw(9) << "Make" << setw(12) << "Model" << setw(12) << "Variant" << setw(15) << "Engine-CC" << setw(12) << "Color" << setw(18) << "Number-Plate" << setw(14) << "Rent" << setw(19) << endl;
		    cout << "\n";
		    cout << "=======================================================================================================================\n" << endl;
			while (!rentcars.eof())
			{
				rentcars >> serial >> make >> model >> variant  >> engcc >> colour >> numplate >> rent ;
				if(ch==serial)
				{
					cout<<"You Have Choosen: "<<endl;
					cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << rent << setw(13) << endl;
					cout << "_____________________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
					ifstream infile( "rentcount.txt", ios::in );
					infile >> i;
					infile.close();
					ofstream outfile( "rentcount.txt", ios::out );
					outfile << ++i;
					outfile.close();	        		
				}		
			}
			rentcars.close();
		}
		void cal()
		{
			cout<<"For How Many Days Are You Renting This Car: ";
			cin>>days;
			cout<<"Do you need Diver ?"<<endl;
			cout<<"If yes enter 1  else enter 0 "<<endl;
			cin>>driver;
			ifstream rentcars("rentcars.txt",ios::in);
			if(!rentcars)
			{
				cout<<"File Can't be open"; 
			    exit(1);
			}
		 	while(!rentcars.eof())
			{			
				rentcars >> serial >> make >> model >> variant  >> engcc >> colour >> numplate >> ppd ;
				if(serial==ch)
				{
					cout << fixed << serial << setw(14) << make << setw(12) << model  << setw(12) << variant << setw(14) << engcc << setw(12) << colour << setw(15) << numplate << setw(13) << "PKR " << ppd << setw(13) << endl;
					cout<<"You Have Choosen "<<endl;
					cout << fixed <<"Serial no. "<< serial <<endl <<"Make "<< make << endl <<"Model " <<model  << endl <<"Variant " <<variant << endl <<"Engine-cc "<< engcc << endl << "Colour "<<colour << endl << "Number Plate "<<numplate << endl << "PKR " <<"Rent " <<ppd << endl ;	
					rent=ppd*days;
				    security=ppd*100;
				    if(driver==1){
				    	drivercost = 2000*days;
					}
				    cout<<"Customer info"<<endl;
				    obj.getinfo();
				    cout<<"\t\t\t"<<"*Customer Bill*\n\n\n"<<endl;
				    obj.displayinfo();
				    total = rent + security + drivercost;
					cout<<"\t\t\t"<<"Number of Days       "<<days<<endl;                                                                                                                                                                                                                                
					cout<<"\t\t\t"<<"Security Deposit  PKR"<<security<<endl;
					cout<<"\t\t\t"<<"Rent              PKR"<<rent<<endl;
					cout<<"\t\t\t"<<"Driver            PKR"<<drivercost<<endl;
					cout<<"\t\t\t"<<"Total             PKR"<<total<<endl;
					ob2.setearnings(total);
					double num;
                    ifstream earn("earning.txt",ios::in);
                    if(!earn)
                    {
                    	cout<<"earning.txt could not be opened"<<endl;
					}
					earn>>num;
					earn.close();
					num += total;
					ofstream earn2("earning.txt",ios::out);
                    if(!earn2)
                    {
                    	cout<<"earning.txt could not be opened"<<endl;
					}
					earn2<<fixed<<num;
					earn2.close();										
					ofstream inforent("inforent.txt",ios::app);
		   	if(!inforent){
				cout<<"File rent info not created ";
				exit(1);
			}
			inforent<<obj.fn<< " " << obj.ln <<" " << obj.getcnic() <<" " << obj.getcontact() <<" " << endl;
			inforent << obj.getaddress() << endl;
			inforent<<  make << " " << model << " " << variant <<" "<<engcc<<" "  <<colour << " " << numplate << " " << days << " " << total <<endl;
			inforent.close();		
				}			
			}
		}			
		void add()
		{
			string color;
			string make1;
			string model1;
			string variant1;
			string engcc1;
			string numplate1;
			cout << "Provide information of your car\n";
			cout << "Enter make : ";
			cin >> make1;
			cout << "Enter model : ";
			cin >> model1;
			cout << "Enter variant : ";
			cin >> variant1;
			cout << "Enter Engine-CC : ";
			cin >> engcc1;
			cout << "Enter color : ";
			cin >> color;
			int flag = 0;
			while ( flag == 0 )
			{
				cout << "Enter number plate : ";
				cin >> numplate1;
				ifstream inrentcars( "rentcars.txt", ios::in );
				while ( !inrentcars.eof() )
				{
					inrentcars >> serial >> make >> model >> variant >> engcc >> colour >> numplate >> ppd ;
					if ( numplate1 == numplate )
					{
						cout << "Number Plate already exists" << endl;
						flag = 0;
						break;
					}
					else 
					{
						flag = 1;
					}
			    }
			    inrentcars.close();
			}
			int ppd1;
			cout << "Enter rent per day : ";
			cin >> ppd1;
			ofstream outrentcars( "rentcars.txt", ios::app );
			outrentcars << "\n" << fixed << ++serial << " " << make1 << " " << model1 << " " << variant1 << " " << engcc1 << " " << color << " " << numplate1 << " " << ppd1;
            r++;		
		}
		~rentcars()
		{	
		}		
};
int rentcars::i = 0;
class maintenance_wash
{
	public:
		string nm;
		double cost;
		double tcost;
		int ch;
		char x;
		string line;
		int i, c;
		maintenance_wash()
		{
			nm = "abc";
			cost = 0;
			tcost = 0;
			ch = 0;
			x = 'Y';
			line = "xyz";
			i = 0;
			c = 0;
		}
		maintenance_wash(string nm, double cost, double tcost, int ch, char x, string line, int i, int c)
		{
			this->nm = nm;
			this->cost = cost;
			this->tcost = tcost;
			this->ch = ch;
			this->x = x;
			this->line = line;
			this->i = i;
			this->c = c;			
		}
		void show(){
			cout<<"\t\t\t\t***WELCOME! TO MAQ CAR WASH/MAINTENENCE FACILITY***"<<endl;
			cout<<"Please Enter Your Good Name: ";
			cin>>nm;
			cout<<"1.Car Wash (Exterior Only)               Cost Rs.250"<<endl;
			cout<<"2.Detail Car Wash (Exterior + Interior)  Cost Rs.500"<<endl;
			cout<<"3.Car Polish (Exterior + Interior)       Cost Rs.600"<<endl;
			cout<<"4.Car Air Filter Change                  Cost Rs.2000"<<endl;
			cout<<"5.Car Oil Change                         Cost Rs.5000"<<endl;
			cout<<"6.Tyre Puncture Repair                   Cost Rs.300"<<endl;
			
		}
		void choose(){
			ofstream wash("maintain.txt",ios::app);
			if(!wash){
				cout<<"File not created";
				exit(1);
			}
			wash<<nm<<endl;
			wash.close();
			while(x=='Y'||x=='y'){
				c++;
				cout<<"Choose From the list above and enter the serial number: ";
				cin>>ch;
				
			
		    switch(ch){
		    	case 1:
				 cost=250;
		    	break;
		    	case 2: 
				 cost=500;
		    	break;
		    	case 3: 
				 cost=600;
		    	break;
		    	case 4:
		    	 cost = 2000;
		    	break;
		    	case 5:
				 cost = 5000;
				break;
				case 6:
				 cost = 300;
				break;	
				default:
					cout<<"Enter Correct Serial Number: ";
					cin>>ch;
			};
			ofstream wash("maintain.txt",ios::app);
			if(!wash){
				cout<<"File not created";
				exit(1);
			}
			switch(ch){
				case 1:
					wash<<"Car Wash (Exterior Only)               Cost Rs.250"<<endl;
					break;
				case 2:
					wash<<"Detail Car Wash (Exterior + Interior)  Cost Rs.500"<<endl;
					break;
				case 3:
					wash<<"Car Polish (Exterior + Interior)       Cost Rs.600"<<endl;
					break;
				case 4:
					wash<<"Car Air Filter Change                  Cost Rs.2000"<<endl;
					break;
				case 5:
					wash<<"Car Oil Change                         Cost Rs.5000"<<endl;
					break;
				case 6:
					wash<<"Tyre Puncture Repair                   Cost Rs.300"<<endl;
					break;
										
			}
			wash.close();
			tcost=tcost+cost;
			cout<<"Do you want something else"<<endl;
			cout<<"Enter Y/y for yes or enter N/n for no :";
			cin>>x;	
		}
		}
		void input(){
			ofstream wash("maintain.txt",ios::app);
			if(!wash){
				cout<<"File not created";
				exit(1);
			}
			wash<<"Total                                  Cost Rs."<<tcost<<endl;
		}
		void display(){
			ifstream test("maintain.txt",ios::in);
			if(!test){
				cout<<"File cannot be opened";
				exit(1);
			}
			while(!test.eof()){
				getline(test,line);
				if(nm==line){
					cout<<"Name: "<<nm<<endl;
					for(i=0;i<c+1;i++){
						getline(test,line);
						cout<<line<<endl;
					}
				}
			}
		}
		~maintenance_wash()
		{
		}	
};
int main()
{
	char ch;
	cout<<"\t\t\t\t****************MAQ CAR DEALERS****************\n"<<endl;
	cout<<"\t\t\t\t  The ultimate solution to your car problems\n\n"<<endl;
	do
	{
		cout<<"\nLogin as admin or continue as customer(A/C): ";
		cin>>ch;		
	}while(ch != 'A' && ch != 'C');
	if(ch == 'A')
	{
		char ans = 'Y';
		while(ans == 'Y')
		{
			int opt;
		    string pass, chkpass;
			char ch;
			int i, flag = 0;
			ifstream inpasswordfile( "password.txt", ios::in );
			if ( !inpasswordfile )
			{
				cerr << "File could not be opened" << endl;
				exit( 1 );
			}
			cout << "Enter password : ";
			for ( i = 0; i < 10; i++ )
			{
				ch = getch();
				if ( ch == 13 )
				{
				    break;
				}
				pass[i] = ch;
				ch = '*';
				cout << ch;
		    }
		    inpasswordfile >> chkpass;
		    for ( i = 0; i < 8; i++ )
			{
				if ( chkpass[i] != pass[i] )
		    	{
			    	cout << "\nUnsuccessful" << endl;
			    	flag = 0;
			    	break;
		    	}
		    	else 
				{
					flag = 1;
				}
			}
			if ( flag == 1 )
			{
				cout << "\nSuccessful" << endl;
			    cout<<"\t\t\t\t****************MAQ CAR DEALERS****************\n"<<endl;
				cout<<"\t\t\t\t  The ultimate solution to your car problems\n\n"<<endl;
			    cout<<"1. ADD NEW CARS\n";
			    cout<<"2. ADD RENT CARS\n";
			    cout<<"3. DISPLAY NUMBER OF NEW CARS SOLD, USED CARS SOLD, CARS ON RENT\n";
			    cout<<"4. DISPLAY NEW CARS INFO\n";
			    cout<<"5. DISPLAY USED CARS INFO\n";
			    cout<<"6. DISPLAY RENTED CARS INFO\n";
			    cout<<"7. DISPLAY MAINTENANCE FILE\n";
			    cout<<"8. DISPLAY EARNINGS AND SPENDINGS\n";
				cout<<"Choose : ";
			    cin>>opt;
			    accounts ob1;
			    newcars ob2;
			    rentcars ob3;
			    if(opt == 1)
			    {
			    	ob2.add();
				}
				else if(opt == 2)
				{
					ob3.add();
				}
				else if(opt == 3)
				{
					ob1.showcount();
				}
				else if(opt == 4)
				{
					ob1.displaynew();
				}
				else if(opt == 5)
				{
					ob1.displayused();				
				}
				else if(opt == 6)
				{
					ob1.displayrent();				
				}
				else if(opt == 7)
				{
					ob1.displaymaintfile();				
				}
				else if(opt == 8)
				{
					ob1.displaypl();				
				}
				else
				{
					cout<<"Incorrect number entered."<<endl;
					return 1;
				}			
			    cout<<"Do You Want To Continue(Y/N): ";
			    cin>>ans;
				cout<<"\n";													
				}
		}
	}
	else if(ch == 'C')
	{
		char ans = 'Y';
		while(ans == 'Y')
		{
		    int opt;
		    cout<<"\t\t\t\t****************MAQ CAR DEALERS****************\n"<<endl;
		    cout<<"\t\t\t\t  The ultimate solution to your car problems\n\n"<<endl;
		    cout<<"1. BUY NEW CARS\n";
		    cout<<"2. BUY USED CARS\n";
		    cout<<"3. RENT A CAR\n";
		    cout<<"4. REPAIR CAR / CAR WASH\n";
		    cout<<"5. SELL YOUR CAR\n";
			cout<<"Choose : ";
		    cin>>opt;
		    newcars ob1;
			usedcars ob2;
			rentcars ob3;
			maintenance_wash ob4;
		    if(opt == 1)
		    {
		    	ob1.show();
		    	ob1.choose();
			}
			else if(opt == 2)
			{
				ob2.show();
			}
			else if(opt == 3)
			{
				ob3.show();
				ob3.choose();
				ob3.cal();
			}
			else if(opt == 4)
			{
				ob4.show();
				ob4.choose();
				ob4.input();
				ob4.display();
			}
			else if(opt == 5)
			{
				ob2.add();
			}
			else
			{
				cout<<"Incorrect number entered."<<endl;
				return 1;
			}			
		    cout<<"Are there any more customers(Y/N): ";
		    cin>>ans;
			cout<<"\n";		
		}
	}
	return 0;
}
