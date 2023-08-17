#include <iostream>

using namespace std;

void calculateEquationResult(int a, int b, int c, int d, int x);
void maxResult(int eq1, int eq2, int eq3);

main() {
	char reply;
	calculateEquationResult(2,3,4,5,10);

	do {
		cout << "\nDo you want to perform any other Calculation(Y/N): ";
		cin >> reply;
		if(reply == 'y' || reply == 'Y') calculateEquationResult(6,7,8,9,11);
		else break;
	} while (reply == 'y' || reply == 'Y');
}

void calculateEquationResult(int a, int b, int c, int d, int x) {
	
	int eq1, eq2, eq3;
	
	eq1 = x + b/(3*a);
	eq2 = (3*a*c - (b*b)) / (3*(a*a));
	eq3 = (2*(b*b*b) - 9 * (a+b+c) + 27*(a*a)*d) / (27 + (a*a*a));

	cout << "Equation 1: " << eq1 << endl;
	cout << "Equation 2: " << eq2 << endl;
	cout << "Equation 3: " << eq3 << endl;
	maxResult(eq1, eq2, eq3);
}

void maxResult(int eq1, int eq2, int eq3) {
	if (eq1> eq2 && eq1 > eq3) cout << "\nEquation 1 Result is maximum";
	else if (eq2 > eq1 && eq2 > eq3) cout << "\nEquation 2 Result is maximum";
	else cout << "\nEquation 3 Result is maximum";
}
