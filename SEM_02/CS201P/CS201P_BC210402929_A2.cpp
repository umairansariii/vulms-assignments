#include <iostream>
#define ROW 3
#define COL 3

// Muhammad Umair (BC210402929) - CS201P Assignment No.2 (Virtual University of Pakistan)

using namespace std;

// 1. Write a class AddMatrix.
class AddMatrix{
	private:
		// 2. A two dimensional array named matrix of integers of dimension 3 x 3. 
		int matrix[ROW][COL];
		
	public:
		// 4. A default constructor which should initialize the array matrix to zero.
		// Default Constructor		
	    AddMatrix(){
	    	for(int i = 0; i < ROW; i++) {
	    		for(int j = 0; j < COL; j++) {
	    			this->matrix[i][j] = 0;
				};
			};
		};
		
		// 5. A parametrized constructor which should take an array as a parameter and
		//    initialize the array matrix with this passed array.
		// Parameterized Constructor		
		AddMatrix(int array[]) {
			setMatrix(array);
		};
		
		// 3. A setter method setMatrix() which should assign the passed array to the array matrix.
		void setMatrix(int array[]) {
			for(int i = 0; i < ROW; i++) {
	    		for(int j = 0; j < COL; j++) {
	    			this->matrix[i][j] = array[COL *i + j];
				};
			};
		};
		
		// 6. An overloaded + operator which should take references to two objects of AddMatrix and
		//    add the two matrices(arrays) of these two objects.
		AddMatrix operator + (AddMatrix &x) {
			AddMatrix y;
				for(int i = 0; i < ROW; i++) {
	    			for(int j = 0; j < COL; j++) {
	    				y.matrix[i][j] = matrix[i][j] + x.matrix[i][j];
					};
				};
            return y;
		};
		
		// 7. A friend function Multiply() which should take two arguments: A reference to an
		//    object of AddMatrix and an integer which will be the first digit of your id.
	    friend AddMatrix Multiply(AddMatrix &x, int id){
	    	AddMatrix y;
	    		for(int i = 0; i < ROW; i++) {
	    			for(int j = 0; j < COL; j++) {
	    				y.matrix[i][j] = id * x.matrix[i][j];
					};
			 	};
			return y;
		};
		
		// 8. A function display() which could either take a reference to an object of AddMatrix
		//    or use this pointer to display the passed matrix.
		void display(AddMatrix &result) {
			for(int i = 0; i < ROW; i++) {
	    		for(int j = 0; j < COL; j++) {
	    			cout << result.matrix[i][j] << "   ";
				};
				cout << endl;
			};
		};
};

int main() {
	
	// 9. Make an instance of this class AddMatrix using the following matrix(array).
	int array[] = {0,1,2,3,0,3,1,2,0};
	AddMatrix matrix(array), multiplied, sum;
	
	// 10. Call the friend function Multiply() and pass the above created instance
	//     and the first digit of your id.
	multiplied = Multiply(matrix, 2); // My ID is BC210402929
	
	// 11. Add these two matrices (an instance created above and Multiplied matrix)
	//     using the overloaded + operator.
	sum = multiplied + matrix;
	
	// 12. Call the display() function to display the matrix, Multiplied matrix and
	//     the resultant(sum) matrix.
	cout << "Matrix:" << endl;
	matrix.display(matrix);
	
	cout << "Multiplied by first digit 2:" << endl; // My ID is BC210402929
	multiplied.display(multiplied);
	
	cout << "Sum:" << endl;
	sum.display(sum);
	
	return 0;
};
