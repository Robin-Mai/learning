
/*

Purpose of Virtual Functions:
	Runtime Polymorphism

Important:
	Runtime polymorphism is achieved only through a pointer (or reference) of base class type. 
	->  a base class pointer can point to the objects of base class as well 
		as to the objects of derived class

	Runtime binding: in accordance with the content of pointer
	Compile time binding:  show() is non-virtual so it will be bound during compile time

What compiler does:

	Creating Virtual Tables keep track of virtual functions

	If object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to VTABLE of that class. 
	For each new object created, a new virtual pointer is inserted as a data member of that class.
	
	Irrespective of object is created or not, 
	class contains as a member a static array of function pointers called VTABLE. 
	Cells of this table store the address of each virtual function contained in that class.
*/


#include<iostream>

using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
	}

	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	/*
		Output:
		print derived class
		show base class
	*/


	return 0;
}
