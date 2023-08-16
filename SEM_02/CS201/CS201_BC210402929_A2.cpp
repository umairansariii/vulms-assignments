#include <iostream>
#include <string.h>

// Muhammad Umair (BC210402929) - CS210 Assignment No.2 (Virtual University of Pakistan)

using namespace std;

class Student {
	private:
		// Private data values of objects
		char std_id[20];
		char vac_name[10];
		int age;
		int num_dose;
		
	public:
		// 2. Use default constructor to assign default data values to the class object std1.
		// Default Constructor
		Student() {			
			strcpy(this->std_id, "BC210402929");
			strcpy(this->vac_name, "Sinovac");
			this->age = 20;
			this->num_dose = 1;
		}
		
		// 3. Use parameterized constructor to assign data values to the class object std2.
		// Parameterized Constructor
		Student(char std_id[], char vac_name[], int age, int num_dose) {
			strcpy(this->std_id, std_id);
			strcpy(this->vac_name, vac_name);
			this->age = age;
			this->num_dose = num_dose;
		}
	
		// Modifiers
		void setName(const char std_id[]) {
			strcpy(this->std_id, std_id);
		};
		void setVaccine(const char vac_name[]) {
			strcpy(this->vac_name, vac_name);
		};
		void setAge(int age) { this->age = age; };
		void setDose(int num_dose) { this->num_dose = num_dose; };
		
		// Accessors
		char* getName() { return this->std_id; };
		char* getVaccine() { return this->vac_name; };
		int getAge() { return this->age; };
		int getDose() { return this->num_dose; };
		
		// Permissions
		friend void display(Student std);
};

// 5. Use Friend function display() for objects std1 and std2 only.
void display(Student std) {
	cout << " Student ID: " << std.getName() << endl;
	cout << " Age: " << std.getAge() << endl;
	cout << " Vaccination: " << std.getVaccine() << endl;
	cout << " Vaccination Doses: " << std.getDose() << endl;
}

int main() {
	
	// 1. Create class objects std1, std2 and std3 of class Student.
	Student std1;
	Student std2("BC123456789", "Sinopharm", 21, 2);
	Student std3;
	
	// Printing students std1 and std2 values.
	cout << "Printing std1 object values using display() ..." << endl;
	display(std1);
	cout << endl;
	
	cout << "Printing std2 object values using display() ..." << endl;
	display(std2);
	cout << endl;
	
	// 4. Use Setter() and Getter() methods to assign and print values of the class object std3.
	std3.setName("MC123456789");
	std3.setVaccine("Moderna");
	std3.setAge(22);
	std3.setDose(3);
	
	cout << "Printing std3 object values using getter() method ..." << endl;
	
	cout << " Student ID: " << std3.getName() << endl;
	cout << " Age: " << std3.getAge() << endl;
	cout << " Vaccination: " << std3.getVaccine() << endl;
	cout << " Vaccination Doses: " << std3.getDose() << endl;
	
	return 0;	
}
