#include <iostream>
using namespace std;

void func_power(int value, int power);

int main()
{
    setlocale(LC_ALL, "RU");
    
    func_power(5, 2);
    func_power(3, 3);
    func_power(4, 4);


    return 0;
}

void func_power(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; ++i)
    {
        result *= value;
    }
    cout << value << " в степени " << power << " = " << result << endl;
}


