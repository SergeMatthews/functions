#include <iostream>
using namespace std;

int fibonacci_func(int n);
unsigned long long fibonacci_func_extended(int n);

int main()
{
    setlocale(LC_ALL, "RU");

    int number = 0;
    cout << "Вариант с рекурсией." << endl << "===============" << endl;
    cout << "Введите число: ";
    cin >> number;

    cout << "Числа Фибоначчи: ";
    for (int i = 1; i <= number; ++i)
        cout << fibonacci_func(i) << ' ';



    cout << endl << endl << "Вариант без рекурсии." << endl << "===============" << endl;
    cout << "Введите число: ";
    cin >> number;

    cout << "Числа Фибоначчи: ";
    for (int i = 1; i <= number; ++i)
        cout << fibonacci_func_extended(i) << ' ';
    cout << endl;

    return 0;
}

int fibonacci_func(int n) {
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci_func(n - 1) + fibonacci_func(n - 2);
}

unsigned long long fibonacci_func_extended(int n) {
    unsigned long long result = 0;
    if (n <= 1)
        result = 0;
    else if (n == 2)
        result = 1;
    else
    {
        unsigned long long previous = 1, pre_previous = 0;
        for (int i = 3; i <= n; ++i)
        {
            result = previous + pre_previous;
            pre_previous = previous;
            previous = result;
        }
    }
    return result;
}