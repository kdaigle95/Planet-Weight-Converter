/*******************************************************************
*   CS 121 Programming Assignment 2
*   File: Prog2Main.cpp
*   Author: Kyle Daigle
*   Desc: Takes users inputted weight and adjusts it for the gravity of users choice of planet.
*   Date: March 1, 2017
*
*   I attest that this program is entirely my own work
*******************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	float weight = 0.0; //stores input weight
	float gravity = 0.0; //stores gravity modifier to corresponding planet
	bool bStop = false; //bool for the outside do...while loop
	bool bStopLoop = false; //bool for the continue do...while loop
	bool bPlanetLoop = false; //bool for the planet input loop
	string planet; //string for planet name
	string reply; //string for reply to continue question
	
	cout << "For all word input, please capitalize the first letter of the word.\n" << endl; //brief instructions
	
	do {
		
		cout << "Please enter a weight in pounds." << endl;
		cin >> weight;
		cout << endl; // blank line
		do { //loops planet question until a proper input is given and recognized
			bPlanetLoop = false; //resets bool to false so it ends loop if planet input is correct
			cout << "Please enter a planet name. For this program, the Moon and Pluto are considered planets as well." << endl;
			cin >> planet;
			//These are the conditionals and gravity modifiers
			if (planet == "Mercury") {
				gravity = 0.4155;
			}
			else if (planet == "Venus") {
				gravity = 0.8975;
			}
			else if (planet == "Earth") {
				gravity = 1.0;
			}
			else if (planet == "Moon") {
				gravity = 0.166;
			}
			else if (planet == "Mars") {
				gravity = 0.3507;
			}
			else if (planet == "Jupiter") {
				gravity = 2.5374;
			}
			else if (planet == "Saturn") {
				gravity = 1.0677;
			}
			else if (planet == "Uranus") {
				gravity = 0.8947;
			}
			else if (planet == "Neptune") {
				gravity = 1.1794;
			}
			else if (planet == "Pluto") { //Pluto is a planet! Yay!
				gravity = 0.0899;
			}
			else {
				cout << "Did not recognize that input. Please capitalize the name of the planet and try again." << endl;
				cout << endl;
				bPlanetLoop = true; //sets question to loop if input is wrong
			}
		} while (bPlanetLoop == true); 

		cout << endl; //blank line
		cout << "Your weight on " << planet << " is " << weight*gravity << " pounds." << endl; //output for adjusted weight
		cout << endl; //blank line
		
		
	
		do{ //loops just in case "user error" dictates someone can't type Yes or No.
			cout<< "Do you want to continue? Type Yes or No." << endl; //Asks to continue
			cin >> reply;
			if (reply == "Yes") { //If yes, continues
				bStop = false;
				bStopLoop = true;
			}
			else if (reply == "No") {//If no, stops script
				bStop = true;
				bStopLoop = true;
			}
			else { //If not understood, asks user again
				cout << "Did not recognize that command. Please type Yes or No." << endl;
				bStopLoop == false;
			}
		} while (bStopLoop == false); //Loops question until given acceptable answer
		
		cout << endl;

	} while (bStop == false); //ends outside do...while loop
}