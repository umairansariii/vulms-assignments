#include <iostream> 
#include <cstdlib> 
using namespace std;

int main() {

  // Students information:
  string name ="Muhammad Umair";
  string id = "BC210402929";
  string division;
  int total;
  float average;

  // Marks obtained in each subject:
  int eng, comp, isl, phy, math;
  cout<<"Marks obtained (English): ";
  cin>>eng;
  cout<<"Marks obtained (Computer): ";
  cin>>comp;
  cout<<"Marks obtained (Islamiat): ";
  cin>>isl;
  cout<<"Marks obtained (Physics): ";
  cin>>phy;
  cout<<"Marks obtained (Mathematics): ";
  cin>>math;
  cout<<""<<endl;

  // Calculating average of total marks:
  total = eng+comp+isl+phy+math;
  average = total/5;

  // Computing division by average:
  if( average >= 60 ) { division = "First"; }
  else if( average >= 45 ){ division = "Second"; }
  else if( average >= 33 ){ division = "Third"; }
  else { division = "Fail"; }

  // Printing results:
  system("clear");
  cout<<"Student Name: "<<name<<endl;
  cout<<"Student ID: "<<id<<endl;
  cout<<"Obtained Marks: "<<total<<"/500"<<endl;
  cout<<"Average: "<<average<<"%"<<endl;
  cout<<"Division: " <<division<<endl;

  return 0;

}