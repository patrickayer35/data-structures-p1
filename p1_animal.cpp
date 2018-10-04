#include <iostream>
using namespace std;

class Animal
{
protected:
	char* name;
	int age;
	
public:
	Animal() {}
	void set_value(char* n, int a)
	{
		name = n;
		age = a;
	}
};

class Zebra : public Animal
{
public:
	Zebra() : Animal() {}
	void print()
	{
		cout << "Animal: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Place of bith: Africa\n";
	}
};

class Dolphin : public Animal
{
public:
	Dolphin() : Animal() {}
	void print()
	{
		cout << "Animal: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Place of bith: Ocean\n";
	}
};

int main()
{
	Zebra z;
	Dolphin d;
	z.set_value("zebra", 12);
	d.set_value("dolphin", 3);
	z.print();
	d.print();
	return 0;
}












