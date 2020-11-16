// факториалы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int N{ 0 };


    auto fact = [](auto& self, int N)
    {
        if (N < 0) 
        {
            return 0; 
        }
        else if (N == 0) 
        {
            return 1; 
        }
        else 
        {
            return N * self(self, N - 1); 
        }
    };

    cout << "Введите факториал" << endl;
    cin >> N;
    
    cout << "Решение" << N << " = " << fact(fact, N) << endl; 
    return 0;
}