// массивы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int main()
{
	int array[5] = { 3,2,4,8,12 }; // массив из пяти чисел
	//Нахождение длинны массива
	int Length = sizeof(array) / sizeof(array[0]);
	std::cout << '{'; for (int i = 0; i < Length; i++)std::cout << array[i] << ", "; std::cout << '}' << std::endl;
	array[0] = 30; // индекс первого элемента - 0 (нулевой элемент)
	array[1] = 20;
	array[2] = 40;
	array[3] = 80;
	array[4] = 102; // индекс последнего элемента - 4

	std::cout << '{'; for (int i = 0; i < Length; i++)std::cout << array[i] << ", "; std::cout << '}' << std::endl;

	int q = 0;
	std::cin >> q;
}

