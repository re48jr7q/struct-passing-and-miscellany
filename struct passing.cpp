#include <iostream>
#include "struct passing miscellany.h"


void printEmployee(const Employee& employee)
{
	std::cout << "ID   " << employee.id<< '\n';
	std::cout << "Age  " << employee.age << '\n';
	std::cout << "Wage " << employee.wage << '\n';
}