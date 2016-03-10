/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Amber Pavlovich <amber.cook@csu.fullerton.edu>, Bianca Baltazar <biancabalt@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* --------------------program description-----------
*Part 1: exceptions
*Part 2: templates
*Part 3: vectors, sets, and one other STL container
*Part 4: Write as many of the following functions as you can in roughly 3 hours
*Part 5: Rewrite the functions you wrote in Part 4 as iterative functions
*Challenge: TO BE DEFINED
*/


#include <iostream>
#include <string>
#include <vector>
#include <set>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::set;

// Wtire a template for a fucntion that displays the contents of an array of any type
template <class A>
A arr(A a[]) {}

int main() {
//Part 1
	int y;
	cout << "Enter a value between 1 and 100.\n";
	
	try {						//block of code that might mess up
		cin >> y;
		if (y < 1 || y > 100)
		throw 99;
	}
	catch (int w) {		//handles the mess up
		 {
			 cout << "Number must be between 1 and 100. ERROR NUMBER: " << w << endl;
		}
	}
	cout << "----------------------------------------------";
	cout << endl;
//-------------------------------------------------------------------------------------------------------------------------------------
// Part 2
	int arr1[] = { 45, 5, 2 };
	for (int i = 0; i < 3; i++) {
		cout << arr1[i] << endl;
	}
	cout << endl;

	char arr2[] = { 'g', 'w', 'r' };
	for (int i = 0; i < 3; i++) {
		cout << arr2[i] << endl;
		}
	cout << "----------------------------------------------";
	cout <<endl;
//---------------------------------------------------------------------------------------------------------------------------------
// Part 3
 vector<string> setA(10, "hi");  //setA is a vector with 10 elements that all contain "5"
	vector<string> setB(setA);
	setB.push_back("y");

	
	for (string element:setB) {
		cout << element << endl;
		}
	cout <<endl;
	
	set<int> S = {100, 10, 80, 90, 70, 40, 30, 20, 50, 110, 60};
	for (int e : S) {
		cout << e << " " << endl;
	}
	
	cout << "----------------------------------------------";
	cout << endl;
//-----------------------------------------------------------------------------------------------------------------------------------
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------------
