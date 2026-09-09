
#include <iostream>
using namespace std;
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int i = 1;
	int A;
	cout << "Enter a number: ";
	cin >> A;

	if (A <= 0) {
		cout << "Nice try. Enter a POSITIVE number. : ";
		cin >> A;
	}

	int fact = A;
	cout << A << "!= " << A;

	while (i != A) {
		fact = fact * (A - i); 
		cout  << " * " << (A - i);
		i++;
	}
	cout << " = " << fact << endl;
}
void arithmetic() {
	int A;
	int B;
	int C;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: ";
	cin >> B;
	cout << "Enter the number of elements in the series: ";
	cin >> C;

	int arit = A;
	int diff = B;
	int counter = C;
	cout << A;

	while (counter > 1) {
		--counter;
		A = A + B;
		cout  << " + " << A;
		arit += A;
	}
	cout << " = " << arit << endl; 

}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}