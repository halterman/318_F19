// 0830_Multifile.cpp 

#include <iostream>
#include "increment.h"

int main() {
	std::cout << "Please enter an integer: ";
	int num;
	std::cin >> num;
	std::cout << "One more than " << num 
		      << " is " << increment(num) << '\n';
}
