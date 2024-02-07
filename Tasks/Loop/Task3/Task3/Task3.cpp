#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	int num;

	std::cout << "¬ведите целое число:" << std::endl;
	std::cin >> num;

	for (int i = 1; i <= 10; i++) {
		std::cout << num << " x " << i << " = " << num * i << std::endl;
	}

	system("pause");
	return 0;
}