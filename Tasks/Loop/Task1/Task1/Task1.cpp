#include <iostream>


int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int num, sum = 0;
	while (true) {
		std::cout << "������� ����� ����� ��� ����� '0', ����� ��������� :" << std::endl;
		std::cin >> num;
		if (num == 0) {
			std::cout << "�����:" << sum << std::endl;
			break;
		}
		sum += num;
	}
	system("pause");
	return 0;
}