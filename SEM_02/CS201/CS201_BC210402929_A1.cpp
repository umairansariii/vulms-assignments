#include <iostream>

using namespace std;

main() {
	string name = "Muhammad Umair", id = "BC210402929";
	int courses = 7, digit = 2;
	
	cout << "My name is " << name + "\n";
	cout << "My vu id is " << id + "\n\n";
	
	cout << "Courses list in current semester" << endl;
	cout << "1. Introduction to Programming" << endl;
	cout << "2. Introduction to Programming (Practical)" << endl;
	cout << "3. Digital Logic Design" << endl;
	cout << "4. Digital Logic Design (Practical)" << endl;
	cout << "5. Economics" << endl;
	cout << "6. Business and Technical English Writing" << endl;
	cout << "7. Calculus II" << endl;
	
	int total = digit + courses;
	
	cout << "\nTotal number of courses = " << courses << endl;
	cout << "First digit of VU ID = " << digit << endl;
	cout << "Sum of First digit of VUID and total courses = " << total << "\n";
	
	int count = 1;
	
	while(count <= total) {
		cout << "\n" << count << ": Welcome to CS201-Introduction to Programming";
		count++;
	};
}
