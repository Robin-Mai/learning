#include <iostream>
#include <string>

using namespace std;

class Employee {
	string name;
	string company; 

public:
	int age; // for demonstration reasons. Normally: attributes private + getters and setters!


	// Constructors
		// Same Name as the class
		// constructor have no return type
		// constructor can be private
		// when you specify a constructor, you should also specify your own default constructor
	Employee() {
		name = "";
		company = "";
		age = 0;
	}

	Employee(string n, string c, int a) {
		name = n;
		company = c;
		age = a;
	}
};

int main()
{
	Employee e;
	//accessing attributes is not working -> because everything is private by default

	//default constructor leads to random values 

	e.age; // works after setting it public

	Employee ee = Employee("John", "Porsche", 25);

	return 0;
}
