#include <iostream>
#include <random>

int main() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> dis(1, 5);

	int** arr = new int* [6];
	
	for (int i = 0; i < 6; i++) 
	{
		arr[i] = new int[8];
	}

	for (int i = 0; i < 6; i++) 
	{
		for (int j = 0; j < 8; j++) 
		{
			arr[i][j] = dis(gen);
		}
	}

	for (int i = 0; i < 6; i++) 
	{
		for (int j = 0; j < 8; j++) 
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i][j + 2])
			{
				std::cout << "found-h" << std::endl;
			}
			if (j + 2 <= 5)
			{
				if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i])
				{
					std::cout << "found-v" << std::endl;
				}
			}
		}
	}


	for (int i = 0; i < 6; ++i) {
		delete[] arr[i];
	}
	delete[] arr;

	system("pause");
}