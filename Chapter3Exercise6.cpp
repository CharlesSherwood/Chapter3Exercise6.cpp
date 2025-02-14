/*FilName:Chapter3Exercise6.cpp
Programmer:Charles Sherwood
Date:2/2025
Requirements:Adjust the ingredients for a recipe that
makes 48 cookies and the measurements are 1.5 cups of 
sugar, 1 cup of butter, and 2.75 cups of flour
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{

	//Create variables 

	double OGsugar = 1.5;
	double OGbutter = 1;
	double OGflour = 2.75;
	double OGcookies = 48;
	double cookies;
	double Newcookie;

	//Get the amount of cookies the user wants.
	cout << "Please enter the amount of cookies that you would like to make:";
	cin >> cookies;
	cout << "You want to make " << cookies << endl;

	//Divide the new cookies with the old amount.
	Newcookie = cookies / OGcookies;

	//Then multiply all the measurements for the sugar.
	double Sugar = OGsugar * Newcookie;
	double Butter = OGbutter * Newcookie;
	double Flour = OGflour * Newcookie;
		

	//Display all the information onto the screen.
	cout << fixed<<setprecision(2)<<"Sugar:" << Sugar << " Cups of sugar" << endl;
	cout <<fixed<<setprecision(2)<< "Butter:" << Butter << " Cups of butter" << endl;
	cout << fixed<<setprecision(2)<<"Flour:" << Flour << " Cups of flour" << endl;
	return 0;

	
	
	
	
	
	
	
	
	
}

