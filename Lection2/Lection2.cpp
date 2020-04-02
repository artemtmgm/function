// struct_func.cpp: определяет точку входа для консольного приложения.
#include <iostream>
using namespace std;

// объявление функции нахождения n!
int faktorial(int numb)// заголовок функции
{
    int rezult = 1; // инициализируем переменную rezult значением 1
    for (int i = 1; i <= numb; i++) // цикл вычисления значения n!
        rezult *= i; // накапливаем произведение в переменной rezult
    return rezult; // передаём значение факториала в главную функцию
}

int main(int argc, char* argv[])
{
    int digit; // переменная для хранения значения n!
    cout << "Enter number: ";
    cin >> digit;
    cout << digit << "! = " << faktorial(digit) << endl;// запуск функции нахождения факториала
    system("pause");
    return 0;
}