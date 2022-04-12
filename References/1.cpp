#include <iostream>
#include <string>

void foo(int& a) {
	a = 10;
}

void foo2(int a) {
	a = 10;
}

int main()
{
	int age = 18;

	int& ref_age = age;

	std::cout << ref_age << std::endl;
	std::cout << &ref_age << std::endl;

	// Update?

	foo2(age); // Do not update.
	std::cout << age << std::endl;

	foo(age); // Update
	std::cout << age << std::endl;

	return 0;
}