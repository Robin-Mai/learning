/*
	Polymorphism: Use Base class pointer to invoke specialised subclass-method with runtime polymorphism

	Use abstract function in base class 
	
	Inheritance of classes is private by default, you should make inherited class public
	
*/


#include <iostream>
#include <string>

using namespace std;

class Employee {

	string company;

protected:
	string name;

public:
	int age;

	virtual void work() {}

	Employee(string n, string c, int a) {
		name = n;
		company = c;
		age = a;
	}
};

class Developer : public Employee {
public:
	string programming_language;

	Developer(string n, string c, int a, string favLang)
		:Employee(n, c, a)
	{
		programming_language = favLang;
	}

	void fixBug() {
		cout << name << " fixed bug using " << programming_language;
	}

	void work() {
		cout << name << " is working as developer";
	}
};

class Teacher : public Employee {
	string subject;

public:

	void prepare_lesson() {
		cout << name << "is preparing" << subject << endl; 

	}

	void work() {
		cout << name << " is working as Teacher"; 
	}

	Teacher(string n, string c, int a, string s)
		: Employee(n, c, a)
	{
		subject = s;
	}
};

int main()
{
	Employee e = Employee("John", "Porsche", 25);

	Developer dd = Developer("Rob", "Vetor", 27, "C++");

	Teacher t = Teacher("Rühle", "PGH", 60, "Deutsch");

	//Use polymorphismn

	Employee* e1 = &dd;
	Employee* e2 = &t;

	e1->work();
	e2->work();

	return 0;
}
