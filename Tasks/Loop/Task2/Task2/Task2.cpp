#include <iostream>

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	int num, sum = 0;

	std::cout << "������� ����� �����:" << std::endl;
	std::cin >> num;
	
	while (num > 0) {
		int digit = num % 10;
		sum += digit;
		num /= 10;
	}

	std::cout << "����� ����:" << sum << std::endl;
	system("pause");
	return 0;

}