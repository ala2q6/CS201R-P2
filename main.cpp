/*
Alex Arbuckle
Professor Michael Essmyer
CS201R : Program 2B > > > (attempt of) following SOLID principles < < <
12 September 2019
*/

#include <iostream> // allowing input and output of data to user
#include <cmath> // incuding math library so we can round up
using namespace std; // shortens code, excludes me from writing std::

int funcInput(string strParameter) { // function that ginds the ara given length and height

	int intLength, intHeight, intArea = 0, intInput, intIncrement = 1; // declaring and assigning some variables

	cout << "\n\nAmount of " << strParameter << " Walls : "; // asking for input of walls
	cin >> intInput; // getting such input

	while (intIncrement <= intInput) { // while statement to interate through amount of walls

		cout << endl << strParameter << " Wall : " << intIncrement << " : Length : "; // asking for length input
		cin >> intLength; // getting length input

		cout << endl << strParameter << " Wall : " << intIncrement << " : Height : "; // asking for height input
		cin >> intHeight; // getting height input

		intArea = intArea + (intLength * intHeight); // calculating area
		intIncrement += 1; // incrementing for number of walls

	}

	return intArea; // returning area calculation

}

void funcOutput(int intParameterA, int intParameterB) { // function to output the results

	cout << "\n\nArea : " << intParameterA << "\nRequired : " << ceil(intParameterA / 400.0) << " can(s)\n"; // outputs area and requierd cans
	cout << "Price : $ " << ceil(intParameterA / 400.0) * intParameterB << "\n"; // outputs price

}

int main() { // where program begins execution

	string strInput; // declaring string

	cout << "Welcome back to RooPaint!"; // hello

	while (true) { // while statement until we get a valid input

		cout << "\n\n1.\t<Interior Painting>\n2.\t<Exterior Painting>\n3.\t<Interior & Exterior Painting>\n\nInput : "; // menu
		cin >> strInput; // getting menu input

		if (strInput == "1") { funcOutput(funcInput("Interior"), 100); break; } // should the input be 1

		else if (strInput == "2") { funcOutput(funcInput("Exterior"), 150); break; } // should the input be 2

		else if (strInput == "3") { funcOutput(funcInput("Interior"), 100); funcOutput(funcInput("Exterior"), 150); break; } // should the input be 3 

		else { cout << "\n\nInput was invalid.\n"; } // should the input be none of the above

	}

	cout << "\nCome again soon!\n"; // goodbye

	return 0; // returned with 0 errors

}