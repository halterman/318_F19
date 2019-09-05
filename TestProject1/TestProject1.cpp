#include <iostream>

class Int {
	int value;
public:
	Int(int value) {
		this->value = value;
	}
	int get() const {
		return value;
	}
};

class NotCopyable {
	Int value;
public:
	NotCopyable() = default;
	NotCopyable(int value) : value(value) {}
	NotCopyable(const NotCopyable& other) = delete;
	NotCopyable& operator=(const NotCopyable& other) = delete;
	int get() const {
		return value.get();
	}
};

void f(NotCopyable nc) {
	std::cout << nc.get() << '\n';
}

int main() {
	NotCopyable x{ 45 };
	std::cout << x.get() << '\n';
	//NotCopyable y;
	//std::cout << y.get() << '\n';
	std::cout << "----------\n";
	//f(x);
}

