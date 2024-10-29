// C++ program to illustrate the use
// of cout object
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	cout << "Welcome to the C++ Looping Syntax Exercises \n\n";

	// Question 1
	cout << "Question 1 \n";
	int n = 2023;
	while (n % 4 == 3) {
		n = (n / 2) * 2 - 3;
	}
	cout << n << "\n";
	// Answer: -1

	cout << "\nEnd of the programe. \n";
}