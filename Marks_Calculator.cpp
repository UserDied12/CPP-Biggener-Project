#include <iostream>
using namespace std;

int main() 
{
	string name;
	cout<<"Enter Your Name :";
	cin>>name;
	
    int marks;
    cout << "Enter Your marks out of 1100 : ";
    cin >> marks;    
    if (marks > 1100) {
	cout << "ENTER THE CORRECT MARKS";
	return 0;}
	
    // Calculate percentage out of 1100
    int per = (marks * 100) / 1100;
    
    // Determine grade using if conditions
    string grade;
        if (per >= 90) grade = "Excellent";
        else if (per >= 80) grade = "Very Good";
        else if (per >= 70) grade = "Good";
        else if (per >= 60) grade = "Satisfaction";
        else if (per >= 50) grade = "Fair";
        else grade = "Fail";
        //Give the result
    
    if (per < 50){
    	cout<<name<<" is Failed "<<endl;
	}
	else if(per >= 50){
    cout <<name<<" has Passed With " << grade << " Marks and scored " << per << "% Marks" << endl;}
    return 0;
}

