// содержимое файла palendrom.cpp
 #include "palendrom.h"
bool palindrom5(int number) // функция нахождения палиндрома пятизначных чисел
{
	int balance1, balance2, balance4, balance5; // переменные хранящие промежуточные результаты
	balance1 = number % 10; // переменной balance1 присвоили первый остаток
	number = number / 10;

	balance2 = number % 10; // переменной balance2 присвоили второй остаток
	number = number / 100;

	balance4 = number % 10; // переменной balance4 присвоили четвёртый остаток
	number = number / 10;

	balance5 = number % 10; // переменной balance5 присвоили пятый остаток
	if ((balance1 == balance5) && (balance2 == balance4))
		return true;
	else
		return false; // функция возвращает ложное значение
}