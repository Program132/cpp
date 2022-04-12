#include <iostream>
#include <string>

void foo(int* a) {
	*a = 10;
}

void foo2(int a) {
	a = 10;
}

int main() 
{
	int age = 18;

	int* p_age = &age;

	std::cout << "Adresse: " << &age << std::endl;
	std::cout << *p_age << std::endl; // Valeur
	std::cout << p_age << std::endl; // Adresse

	std::cout << age << std::endl;
	foo2(age); // Did not change the value.
	std::cout << age << std::endl;

	std::cout << age << std::endl;
	foo(p_age); // Updated
	std::cout << age << std::endl;

	return 0;
}