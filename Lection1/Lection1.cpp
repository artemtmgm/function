
#include <iostream>
using namespace std;
// объявление функции нахождения n!
void faktorial(int numb)// заголовок функции
{
    int rezult = 1; // инициализируем переменную rezult значением 1
    for (int i = 1; i <= numb; i++) // цикл вычисления значения n!
        rezult *= i; // накапливаем произведение в переменной rezult
    cout << numb << "! = " << rezult << endl; // печать значения n!
}
int main(int argc, char* argv[])
{
    int digit; // переменная для хранения значения n!
    cout << "Enter number: ";
    cin >> digit;
    faktorial(digit);// запуск функции нахождения факториала
    system("pause");
    return 0;
}