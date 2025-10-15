#include <cmath>
#include <iostream>

int main()
{
	
	std::cout << "Введите четный размер массива" << std::endl;
	int size;
	std::cin >> size;
    int  arr[size];
	
    for (int i = 0; i < size; i++)
	{
        arr[i] = std::rand() % 20;
        std::cout << arr[i];
        std::cout << ' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < size / 2; i++)
	{
        std::swap(arr[i], arr[(size - 1) - i]);
    }

    for (int i = 0; i < size; i++)
	{
        std::cout << arr[i];
        std::cout << ' ';
    }
    std::cout << std::endl;
	
    return 0;
}
