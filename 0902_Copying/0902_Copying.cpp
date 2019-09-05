// 0902_Copying.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Integer {
	int value;
public:
	Integer(int num) {
		value = num;
	}
	int get() const {
		return value;
	}
};

class Widget {
	Integer value;
public:
	Widget(Integer v): value(2*v.get() - 16) { 
	}
	Widget(const Widget& other) = delete;
	Widget& operator=(const Widget& other) = delete;

	void set(int v) {
		value = v;
	}
	int get() const {
		int x{ 45 };
		x = 100;
		return value.get();
	}
};

void print(const Widget& w) {
	std::cout << w.get() << '\n';
}

int main() {
	Integer i{ 45 };
	Widget w1{ i };
	print(w1);
}
