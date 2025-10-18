//Asks the user to enter a number
//Uses a for loop to iterate from 1 to 10
//Prints each multiplication operation and its result
//Displays the table in the format: "number x i = result"

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a Number =";
	cin>>num;
	for(int i = 1 ; i<=10 ; i++){
		cout<<num<<" x "<< i <<" = "<<num*i<<endl;
	}
	
}
