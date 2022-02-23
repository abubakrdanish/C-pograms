#include<iostream>
#include<string>

using namespace std;
struct baseball_player{
	string name;
	int homeruns;
	int numberofhits;
	
	
};
 baseball_player player[10];
int main(){
	
	int i,result;
	string n;
	cout<<"Enter baseball player info: "<<endl;
	for(i=1;i<=10;i++){
		cout<<"Enter name of player "<<i;
		cin>>player[i].name;
		cout<<"Enter number of homeuns by player "<<i;
		cin>>player[i].homeruns;
		cout<<"Enter number of hits by player "<<i;
		cin>>player[i].numberofhits;
		
	}
	cout<<"Enter name of player: ";
      cin>>n;
	for(i=1;i<=10;i++){
		if(n==player[i].name){
			result=i;
			break;
		}
	}
	if(result>=0){
		cout<<"Index of the player is "<<result<<endl;
		
	}
	else{
		cout<<"The player was not found";
	}
	
}