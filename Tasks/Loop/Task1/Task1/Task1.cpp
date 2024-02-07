#include <iostream>


int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int num, sum = 0;
	while (true) {
		std::cout << "¬ведите целое число или число '0', чтобы закончить :" << std::endl;
		std::cin >> num;
		if (num == 0) {
			std::cout << "—умма:" << sum << std::endl;
			break;
		}
		sum += num;
	}
	system("pause");
	return 0;
}